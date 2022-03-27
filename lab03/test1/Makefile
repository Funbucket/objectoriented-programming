DIR=/Users/johaechang/googletest/googletest

all:
	g++ -o main main.cc multi.cc -std=c++11

test:
	g++ -o multi_test multi_test.cc multi.cc -isystem -I${DIR}/include -L${DIR}/lib -pthread -lgtest -std=c++11
	./multi_test

clean:
	rm -rf multi_test main
