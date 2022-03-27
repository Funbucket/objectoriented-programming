#include <vector>
#include <string>
#include "gtest/gtest.h"
#include "OthelloController.h"
#include "OthelloBoard.h"
#include "Black.h"
#include "White.h"
#include "Player.h"
#include "Cell.h"


std::string ToString(Player* player) {
  std::string s = "";
  for (std::vector v : player->status()) {
    s += "(";
    s += std::to_string(v[0]).append(", ");
    s += std::to_string(v[1]).append(")");
  }
  return s;
}

OthelloBoard* othello_board = OthelloBoard::GetInstance();
Player* black = new Black("Player_Black");
Player* white = new White("Player_White");

TEST(Test, Test1) {
  othello_board->SetSize(4);
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(ToString(black), "(2, 1)(1, 2)");
}

TEST(Test, Test2) {
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(ToString(white), "(1, 1)(2, 2)");
}

TEST(Test, Test3) {
  othello_board->GetBoard()[1][0].Change("B");
  othello_board->GetBoard()[2][0].Change("B");
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(othello_board->GetBoard()[0][1].color(), "#");
}

TEST(Test, Test4) {
  othello_board->GetBoard()[0][0].Change("W");
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(othello_board->GetBoard()[3][0].color(), "#");
}

TEST(Test, Test5) {
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(white->Move(3, 0), true);
}

TEST(Test, Test6) {
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(black->Move(2, 3), true);
}

TEST(Test, Test7) {
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(othello_board->GetBoard()[0][1].color(), "#");
}

TEST(Test, Test8) {
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(black->Move(1, 0), false);
}

TEST(Test, Test9) {
  othello_board->GetBoard()[0][1].Change("B");
  othello_board->GetBoard()[0][2].Change("B");
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(othello_board->GetBoard()[0][3].color(), "empty");
}

TEST(Test, Test10) {
  othello_board->GetBoard()[1][3].Change("B");
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(othello_board->GetBoard()[3][1].color(), "#");
}

TEST(Test, Test11) {
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(othello_board->GetBoard()[3][2].color(), "empty");
}


TEST(Test, Test12) {
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(othello_board->GetBoard()[3][2].color(), "#");
}

TEST(Test, Test13) {
  white->Move(0, 3);
  othello_board->GetBoard()[3][1].Change("B");
  othello_board->GetBoard()[3][2].Change("W");
  othello_board->CreateBoard(black, white);
  black->Move(3, 3);
  othello_board->CreateBoard(black, white);
  othello_board->CreateBoard(black, white);
  EXPECT_EQ(ToString(black), "(3, 1)(2, 2)(3, 2)(1, 3)(2, 3)(3, 3)");
}
