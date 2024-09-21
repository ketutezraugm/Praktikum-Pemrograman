main: payslip.o
	g++ payslip.o -o payslip

main.o: payslip.cpp
	g++ -c payslip.cpp -o payslip.o

run: payslip
	./payslip

clean:
	del payslip.o payslip.exe
