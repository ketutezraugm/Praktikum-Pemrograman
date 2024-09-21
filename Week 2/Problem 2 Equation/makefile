equation: equation.o
	g++ equation.o -o equation

equation.o: equation.cpp
	g++ -c equation.cpp -o equation.o

run: equation
	./equation

clean:
	del equation.o equation.exe
