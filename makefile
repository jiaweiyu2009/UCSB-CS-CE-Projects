all: runEverything

runEverything: main.cpp avl.cpp
	g++ -std=c++11 -o prog3.out main.cpp avl.cpp