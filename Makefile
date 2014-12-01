all: main

main: main.o Node.o Link_list.o
	g++ main.o Node.o Link_list.o -o main

main.o: main.cpp
	g++ -c main.cpp -o main.o

Node.o: Node.h Node.cpp
	g++ -c Node.cpp -o Node.o -g

Link_list.o: Link_list.h Link_list.cpp
	g++ -c Link_list.cpp -o Link_list.o -g

clean:
	rm *.o

mrproper: clean
	rm main
