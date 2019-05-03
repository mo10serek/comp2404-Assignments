sas:	main.o Storage.o Student.o Course.o 
	g++ -o sas main.o Storage.o Student.o Course.o

main.o:	main.cc Student.h defs.h
	g++ -c main.cc

Storage.o:	Storage.cc Storage.h defs.h
	g++ -c Storage.cc

Student.o:	Student.cc Student.h Course.h defs.h
	g++ -c Student.cc

Course.o:	Course.cc Course.h
	g++ -c Course.cc

clean:
	rm -f *.o sas
