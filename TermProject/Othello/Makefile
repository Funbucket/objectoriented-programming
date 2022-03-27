GTEST_DIR= /Users/johaechang/googletest/googletest

CPPFLAGS += -isystem $(GTEST_DIR)/include

CXXFLAGS += -pthread

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

GTEST_SRCS_ = $(GTEST_DIR)/src/*.cc $(GTEST_DIR)/src/*.h $(GTEST_HEADERS)

all : main

clean :
	rm -f gtest.a gtest_main.a *.o main test

gtest-all.o : $(GTEST_SRCS_)
	g++ $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest-all.cc

gtest_main.o : $(GTEST_SRCS_)
	g++ $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c \
            $(GTEST_DIR)/src/gtest_main.cc

gtest.a : gtest-all.o
	$(AR) $(ARFLAGS) $@ $^

gtest_main.a : gtest-all.o gtest_main.o
	$(AR) $(ARFLAGS) $@ $^

OthelloController.o : OthelloController.h OthelloController.cc
	g++ --std=c++17 -c OthelloController.cc -o $@

OthelloBoard.o : OthelloBoard.h OthelloBoard.cc
	g++ --std=c++17 -c OthelloBoard.cc -o $@

Cell.o : Cell.h Cell.cc
	g++ --std=c++17 -c Cell.cc -o $@

Player.o : Player.h Player.cc
	g++ --std=c++17 -c Player.cc -o $@

Black.o : Black.h Black.cc
	g++ --std=c++17 -c Black.cc -o $@
	
White.o : White.h White.cc
	g++ --std=c++17 -c White.cc -o $@

main : main.cc OthelloController.o OthelloBoard.o Cell.o Player.o Black.o White.o $(GTEST_HEADERS)
	g++ --std=c++17 main.cc OthelloController.o OthelloBoard.o Cell.o Player.o Black.o White.o -o $@

Othello_test.o : Othello_test.cc $(GTEST_HEADERS)
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 -c Othello_test.cc -o $@

test : Othello_test.o OthelloBoard.o OthelloController.o Black.o White.o Cell.o Player.o gtest_main.a
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 $^ -o $@

.PHONY: all clean 
