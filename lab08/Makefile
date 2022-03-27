GTEST_DIR = /Users/johaechang/googletest/googletest

CPPFLAGS += -isystem $(GTEST_DIR)/include

CXXFLAGS += -pthread --std=c++17

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

GTEST_SRCS_ = $(GTEST_DIR)/src/*.cc $(GTEST_DIR)/src/*.h $(GTEST_HEADERS)

all : main

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

test.o : test.cc $(GTEST_HEADERS)
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 -c test.cc -o $@

test : test.o IntNode.o StringNode.o TreeUtil.o Node.o gtest_main.a
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 $^ -o $@

Node.o: Node.h Node.cc
  g++ --std=c++17 -c Node.cc -o $@

IntNode.o : Node.h IntNode.h IntNode.cc
  g++ --std=c++17 -c IntNode.cc -o $@

StringNode.o : Node.h StringNode.h StringNode.cc
  g++ --std=c++17 -c StringNode.cc -o $@

TreeUtil.o : Node.h TreeUtil.h TreeUtil.cc
  g++ --std=c++17 -c TreeUtil.cc -o $@

main : main.cc Node.o IntNode.o StringNode.o TreeUtil.o
  g++ --std=c++17 main.cc $^ -o $@

clean :
	rm -f gtest.a gtest_main.a *.o main test

.PHONY : all clean
