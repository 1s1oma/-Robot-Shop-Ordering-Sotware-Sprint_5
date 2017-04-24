# Makefile for Shola Robot Inc
CXXFLAGS = -std=c++11
LDFLAGS = -L/usr/local/lib -lXext -lm -Wl,-Bsymbolic-functions -lfltk_images -lfltk -lX11

all: gui

debug: CXXFLAGS += -g
debug: gui

rebuild: clean gui
gui: Customer.o Robot_part.o Head.o Arm.o Locomotor.o Torso.o Battery.o Robot_model.o Sales_associate.o Order.o Shop.o View.o Controller.o main.o
	$(CXX) $(CXXFLAGS) Customer.o Robot_part.o Head.o Arm.o Locomotor.o Torso.o Battery.o Robot_model.o Sales_associate.o Order.o Shop.o View.o Controller.o main.o $(LDFLAGS)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp $(LDFLAGS)
Robot_part.o: Robot_part.cpp Robot_part.h
	$(CXX) $(CXXFLAGS) -c Robot_part.cpp
Head.o: Head.cpp Head.h
	$(CXX) $(CXXFLAGS) -c Head.cpp $(LDFLAGS)
Arm.o: Arm.cpp Arm.h
	$(CXX) $(CXXFLAGS) -c Arm.cpp $(LDFLAGS)
Locomotor.o: Locomotor.cpp Locomotor.h
	$(CXX) $(CXXFLAGS) -c Locomotor.cpp $(LDFLAGS)
Torso.o: Torso.cpp Torso.h
	$(CXX) $(CXXFLAGS) -c Torso.cpp $(LDFLAGS)
Battery.o: Battery.cpp Battery.h
	$(CXX) $(CXXFLAGS) -c Battery.cpp $(LDFLAGS)
Customer.o: Customer.cpp Customer.h
	$(CXX) $(CXXFLAGS) -c Customer.cpp $(LDFLAGS)
View.o: View.cpp View.h
	$(CXX) $(CXXFLAGS) -c View.cpp $(LDFLAGS)
Robot_model.o: Robot_model.cpp Robot_model.h
	$(CXX) $(CXXFLAGS) -c Robot_model.cpp $(LDFLAGS)
Controller.o: Controller.cpp Controller.h
	$(CXX) $(CXXFLAGS) -c Controller.cpp $(LDFLAGS)
Order.o: Order.cpp Order.h
	$(CXX) $(CXXFLAGS) -c Order.cpp $(LDFLAGS)
Sales_associate.o: Sales_associate.cpp Sales_associate.h
	$(CXX) $(CXXFLAGS) -c Sales_associate.cpp $(LDFLAGS)
Shop.o: Shop.cpp Shop.h 
	$(CXX) $(CXXFLAGS) -c Shop.cpp $(LDFLAGS)
clean:
	-rm -f *.o a.out

