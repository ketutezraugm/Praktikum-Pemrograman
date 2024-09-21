payslip: payslip.o
	g++ payslip.o -o payslip

payslip.o: payslip.cpp
	g++ -c payslip.cpp -o payslip.o

run: payslip
	./payslip

clean:
	del payslip.o payslip.exe
