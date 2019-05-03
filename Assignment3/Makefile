sas:	main.o Control.o ConcreteControl.o View.o Monitor.o GPAMonitor.o FWMonitor.o Storage.o Student.o List.o Course.o 
	g++ -o sas main.o Control.o ConcreteControl.o View.o Monitor.o GPAMonitor.o FWMonitor.o Storage.o Student.o List.o Course.o

main.o:	main.cc Student.h
	g++ -c main.cc

Control.o:	Control.cc Control.h
	g++ -c Control.cc

ConcreteControl.o: ConcreteControl.cc ConcreteControl.h
	g++ -c ConcreteControl.cc ConcreteControl.h

View.o: View.cc View.h
	g++ -c View.cc View.h

Monitor.o: Monitor.cc Monitor.h
	g++ -c Monitor.cc Monitor.h

GPAMonitor.o: GPAMonitor.cc GPAMonitor.h
	g++ -c GPAMonitor.cc GPAMonitor.h

FWMonitor.o: FWMonitor.cc FWMonitor.h
	g++ -c FWMonitor.cc FWMonitor.h

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
