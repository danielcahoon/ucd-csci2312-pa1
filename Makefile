CXX      := c++
CXXFLAGS := -g -std=gnu++11

ucd_csci2312_pa1: ErrorContext.o Point.o PointTests.o area.o main.o
	$(CXX) $(CXXFLAGS) -o ucd_csci2312_pa1 ErrorContext.o Point.o PointTests.o area.o main.o

main.o: main.cpp PointTests.h ErrorContext.h area.cpp
	$(CXX) $(CXXFLAGS) -c -o main.o main.cpp

area.o: area.cpp Point.h
	$(CXX) $(CXXFLAGS) -c -o area.o area.cpp

ErrorContext.o: ErrorContext.h ErrorContext.cpp
	$(CXX) $(CXXFLAGS) -c -o ErrorContext.o ErrorContext.cpp

Point.o: Point.h Point.cpp
	$(CXX) $(CXXFLAGS) -c -o Point.o Point.cpp

PointTests.o: PointTests.h PointTests.cpp
	$(CXX) $(CXXFLAGS) -c -o PointTests.o PointTests.cpp

.PHONY: clean test

clean:
	rm -f ErrorContext.o Point.o PointTests.o area.o main.o ucd_csci2312_pa1

test: ucd_csci2312_pa1
	./ucd_csci2312_pa1