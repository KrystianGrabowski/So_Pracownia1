main: main.cpp
	g++ -pthread -Wall -Werror main.cpp -o main
	
run: main
	./main
