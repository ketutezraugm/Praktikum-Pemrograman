max: max.o
	g++ max.o -o max

max.o: max.cpp
	g++ -c max.cpp -o max.o

run: max
	./max

clean:
	del max.o max.exe
