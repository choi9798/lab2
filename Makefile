main: bmi.o main.o
	g++ -o main main.o bmi.o

BMI.o: bmi.cpp BMI.h
	g++ -c bmi.cpp

main.o: main.cpp bmi.h
	g++ -c main.cpp

clean:
	rm bmi *.o
