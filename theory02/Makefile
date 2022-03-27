all : hello

hello : hello.cc
	clang++ -std=c++17 $^ -o $@

clean : 
	rm -f hello

.PHONY: all clean
