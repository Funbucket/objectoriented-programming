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

test : test.o HyundaiPartsFactory.o KiaPartsFactory.o CarBuilder.o Car.o Part.o Door.o Wheel.o Roof.o gtest_main.a
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 $^ -o $@

Part.o: Part.h Part.cc
  g++ --std=c++17 -c Part.cc -o $@

Door.o : Part.h Door.h Door.cc
  g++ --std=c++17 -c Door.cc -o $@

Wheel.o : Part.h Wheel.h Wheel.cc
  g++ --std=c++17 -c Wheel.cc -o $@

Roof.o : Part.h Roof.h Roof.cc
  g++ --std=c++17 -c Roof.cc -o $@

Car.o : Part.h Car.h Car.cc
  g++ --std=c++17 -c Car.cc -o $@

HyundaiPartsFactory.o : CarPartsFactory.h HyundaiPartsFactory.h HyundaiPartsFactory.cc
  g++ --std=c++17 -c HyundaiPartsFactory.cc -o $@

KiaPartsFactory.o : CarPartsFactory.h KiaPartsFactory.h KiaPartsFactory.cc
  g++ --std=c++17 -c KiaPartsFactory.cc -o $@

CarBuilder.o : Car.h CarBuilder.h CarBuilder.cc
  g++ --std=c++17 -c CarBuilder.cc -o $@

main : main.cc HyundaiPartsFactory.o KiaPartsFactory.o CarBuilder.o Part.o Car.o Door.o Roof.o Wheel.o
  g++ --std=c++17 main.cc $^ -o $@

clean :
	rm -f gtest.a gtest_main.a *.o main test

.PHONY : all clean


