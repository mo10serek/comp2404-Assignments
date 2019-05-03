sas:	main.o Control.o View.o Storage.o Student.o List.o Course.o 
	g++ -o sas main.o Control.o View.o Storage.o Student.o List.o Course.o

main.o:	main.cc Student.h
	g++ -c main.cc

Control.o:	Control.cc Control.h
	g++ -c Control.cc

View.o: View.cc View.h
	g++ -c View.cc View.h

Storage.o:	Storage.cc Storage.h 
	g++ -c Storage.cc

Student.o:	Student.cc Student.h Course.h List.h
	g++ -c Student.cc

Linklist.o:	List.cc List.h
	g++ -c List.cc

Course.o:	Course.cc Course.h
	g++ -c Course.cc

clean:
	rm -f *.o sas
