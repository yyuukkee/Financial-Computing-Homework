CC = g++
CFLAGS = -Wall -ggdb3 -std=c++11


OptionPricer05: BinomialTreeModel02.o Option05.o OptionPricer05.o
	$(CC) $(CFLAGS) -o OptionPricer05 BinomialTreeModel02.o Option05.o OptionPricer05.o

BinomialTreeModel02.o: BinomialTreeModel02.cpp BinomialTreeModel02.h
	$(CC) $(CFLAGS) -c BinomialTreeModel02.cpp

Option05.o: Option05.cpp Option05.h BinomialTreeModel02.h
	$(CC) $(CFLAGS) -c Option05.cpp

OptionPricer05.o: OptionPricer05.cpp Option05.h BinomialTreeModel02.h
	$(CC) $(CFLAGS) -c OptionPricer05.cpp

clean:
	rm -rf OptionPricer05 *.o