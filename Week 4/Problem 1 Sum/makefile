main: sum.o
	g++ sum.o -o sum

main.o: sum.cpp
	g++ -c sum.cpp -o sum.o

run: sum
	./sum

clean:
	del sum.o sum.exe
