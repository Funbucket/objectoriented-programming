#include <iostream>
#include <string>
#include <vector>
#include "OthelloController.h"
#include "OthelloBoard.h"
#include "Black.h"
#include "White.h"

OthelloController* OthelloController::instance_ = nullptr;

OthelloController::OthelloController() {}

OthelloController* OthelloController::GetInstance() {
  if ( instance_ == nullptr ) {
    instance_ = new OthelloController;
  }
  return instance_;
}

void OthelloController::PlayOthello() {
  std::string input;
  int size;
  std::cout << "Enter board size(size > 3 & even number) : ";
  std::cin >> input;

  // 보드의 크기가 유효하지 않다면 재입력
  while (1) {
    bool is_valid = true;
    for (char const c : input) {
      if (std::isdigit(c) == 0) {
        is_valid = false;
      }
    }

    // 문자열이 숫자가 아니라면 재입력
    if (is_valid == false) {
      std::cout << "Enter size again." << std::endl;
      std::cout << "Enter board size : ";
      std::cin >> input;
      continue;
    }

    size = std::stoi(input);
    if (size <= 3 || size % 2 != 0) {
      std::cout << "Enter size again." << std::endl;
      std::cout << "Enter board size : ";
      std::cin >> input;
    } else {
      break;
    }
  }

  std::cout << "[ Game Start! ]" << std::endl;

  // 플레이어마다 사용자 이름 입력받기
  std::string name;

  std::cout << "Enter Black Player's name : ";
  std::cin >> name;
  Player* black = new Black(name);

  std::cout << "Enter White Player's name : ";
  std::cin >> name;
  Player* white = new White(name);

  OthelloBoard* othello_board = OthelloBoard::GetInstance();
  othello_board->SetSize(size);
  char x;
  std::string y;

  while (1) {
    //오델로 보드 갱신
    othello_board->CreateBoard(black, white);

    // 돌을 놓을 곳이 없다면 턴 넘기기
    if (othello_board->GetPushed() == false) {
      std::cout << "[ There are no available positions! ]" << std::endl;
      othello_board->CreateBoard(black, white);
      if (othello_board->GetPushed() == false) {
        break;
      }
    }

    // 돌을 놓을 좌표 입력
    if (othello_board->CurrentPlayer() == "B") {
      std::cout << black->name() << "'s turn!" << std::endl
      << "Enter position ( ";

      for (std::vector<int> position : black->ValidPosition()) {
        std::cout << "<" << static_cast<char> (position[0] + 65) << " "
        << position[1] + 1 << "> ";
      }
      std::cout << ") :" << std::endl;

      std::cin >> x;
      std::cin >> y;

      // 좌표가 유효하지 않다면 재입력
      while (!black->Move(toupper(x) - 65, y[0] - 49) || y.size() > 1) {
        std::cout << "Enter position again! : ";
        std::cin >> x;
        std::cin >> y;
      }
    } else {
      std::cout << white->name() << "'s turn!" << std::endl
      << "Enter position ( ";

      for (std::vector<int> position : white->ValidPosition()) {
        std::cout << "<" << static_cast<char> (position[0] + 65) << " "
        << position[1] + 1 << "> ";
      }
      std::cout << ") :" << std::endl;

      std::cin >> x;
      std::cin >> y;

      // 좌표가 유효하지 않다면 재입력
      while (!white->Move(toupper(x) - 65, y[0] - 49) || y.size() > 1) {
        std::cout << "Enter position again! : ";
        std::cin >> x;
        std::cin >> y;
      }
    }
  }

  std::cout << "[Game Over]" << std::endl;
  int count_black = 0;
  int count_white = 0;

  for (int i=0; i < size; i++) {
    for (int j=0; j < size; j++) {
      if (othello_board->GetBoard()[j][i].color() == "B") {
        count_black++;
      } else if (othello_board->GetBoard()[j][i].color() == "W") {
        count_white++;
      }
    }
  }
  std::cout << black->name() << "'s score: " << count_black << std::endl;
  std::cout << white->name() << "'s score: " << count_white << std::endl;
  if (count_white > count_black) {
    std::cout << white->name() << " is winner!!" << std::endl;
  } else if (count_white == count_black) {
    std::cout << "Draw!!";
  } else {
    std::cout << black->name() << " is winner!!" << std::endl;
  }
}
