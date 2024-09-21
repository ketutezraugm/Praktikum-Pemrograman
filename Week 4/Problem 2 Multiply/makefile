multiply: multiply.o
	g++ multiply.o -o multiply

multiply.o: multiply.cpp
	g++ -c multiply.cpp -o multiply.o

run: multiply
	./multiply

clean:
	del multiply.o multiply.exe
