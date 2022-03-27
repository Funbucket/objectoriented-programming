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

test : test.o Circle.o Triangle.o Rectangle.o ShapeUtil.o gtest_main.a
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 $^ -o $@


Circle.o : Circle.h Circle.cc
  g++ --std=c++17 -c Circle.cc -o $@

Rectangle.o : Rectangle.h Rectangle.cc
  g++ --std=c++17 -c Rectangle.cc -o $@

Triangle.o : Triangle.h Triangle.cc
  g++ --std=c++17 -c Triangle.cc -o $@

Rectangle.o : Rectangle.h Rectangle.cc
  g++ --std=c++17 -c Rectangle.cc -o $@

ShapeUtil.o : ShapeUtil.h Circle.h Rectangle.h Triangle.h
  g++ --std=c++17 -c ShapeUtil.cc -o $@

main : main.cc ShapeUtil.o Circle.o Rectangle.o Triangle.o Rectangle.o
  g++ --std=c++17 -c main.cc $^ -o $@

clean :
	rm -f gtest.a gtest_main.a *.o main test

.PHONY : all clean

