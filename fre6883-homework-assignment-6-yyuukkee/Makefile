CXX = g++
CXXFLAGS = -Wall -std=c++11

# Targets
all: OptionPricer08

OptionPricer08: OptionPricer08.o Option08.o BinomialTreeModel02.o
	$(CXX) $(CXXFLAGS) -o OptionPricer08 OptionPricer08.o Option08.o BinomialTreeModel02.o

OptionPricer08.o: OptionPricer08.cpp Option08.h BinomialTreeModel02.h BinLattice02.h
	$(CXX) $(CXXFLAGS) -c OptionPricer08.cpp

Option08.o: Option08.cpp Option08.h BinomialTreeModel02.h BinLattice02.h
	$(CXX) $(CXXFLAGS) -c Option08.cpp

BinomialTreeModel02.o: BinomialTreeModel02.cpp BinomialTreeModel02.h
	$(CXX) $(CXXFLAGS) -c BinomialTreeModel02.cpp

# Clean up
clean:
	rm -f *.o OptionPricer08

