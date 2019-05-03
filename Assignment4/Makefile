OPT = -Wall

OBJS = main.o View.o Monitor.o GPAMonitor.o FWMonitor.o Storage.o Student.o CourseList.o Course.o Control.o

sas:	$(OBJS) StuServer.o
	g++ $(OPT) -o sas $(OBJS) StuServer.o

main.o:	main.cc Student.h
	g++ $(OPT) -c main.cc

Monitor.o: Monitor.cc Monitor.h
	g++ $(OPT) -c Monitor.cc Monitor.h

GPAMonitor.o: GPAMonitor.cc GPAMonitor.h
	g++ $(OPT) -c GPAMonitor.cc GPAMonitor.h

FWMonitor.o: FWMonitor.cc FWMonitor.h
	g++ $(OPT) -c FWMonitor.cc FWMonitor.h

Storage.o:	Storage.cc Storage.h 
	g++ $(OPT) -c Storage.cc

Student.o:	Student.cc Student.h Course.h List.h
	g++ $(OPT) -c Student.cc

CourseList.o: 	CourseList.cc CourseList.h
	g++ $(OPT) -c CourseList.cc

Course.o:	Course.cc Course.h
	g++ $(OPT) -c Course.cc

Control.o:	Control.cc Control.h Student.h
	g++ $(OPT) -c Control.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc View.h

clean:
	rm -f $(OBJS) sas
