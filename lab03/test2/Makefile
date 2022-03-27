DIR=/Users/johaechang/googletest/googletest

all : main
	g++ -o main main.cc multi.cc -std=c++17

multi_test.o : multi_test.cc
	g++ -c multi_test.cc

test : multi_test.o multi.o
	g++ -o test multi_test.cc multi.cc -isystem -I${DIR}/include -L${DIR}/lib -pthread -lgtest -std=c++17

multi.o : multi.cc multi.h
	g++ -c multi.cc

main.o : main.cc multi.h
	g++ -c main.cc

main : multi.o main.o
	g++ --std=c++17 multi.o main.o -o main

clean:
	rm -f multi.o main.o main
