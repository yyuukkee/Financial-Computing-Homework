CC = g++
CFLAGS = -Wall -ggdb3 -std=c++11

OptionPricer05: BinomialTreeModel02.o Option05.o DoubDigitOpt.o StrangleOpt.o ButterflyOpt.o OptionPricer05.o
	$(CC) $(CFLAGS) -o OptionPricer05 BinomialTreeModel02.o Option05.o DoubDigitOpt.o StrangleOpt.o ButterflyOpt.o OptionPricer05.o

BinomialTreeModel02.o: BinomialTreeModel02.cpp BinomialTreeModel02.h
	$(CC) $(CFLAGS) -c BinomialTreeModel02.cpp

Option05.o: Option05.cpp Option05.h BinomialTreeModel02.h
	$(CC) $(CFLAGS) -c Option05.cpp

DoubDigitOpt.o: DoubDigitOpt.cpp DoubDigitOpt.h Option05.h
	$(CC) $(CFLAGS) -c DoubDigitOpt.cpp

StrangleOpt.o: StrangleOpt.cpp StrangleOpt.h Option05.h
	$(CC) $(CFLAGS) -c StrangleOpt.cpp

ButterflyOpt.o: ButterflyOpt.cpp ButterflyOpt.h Option05.h
	$(CC) $(CFLAGS) -c ButterflyOpt.cpp

OptionPricer05.o: OptionPricer05.cpp Option05.h BinomialTreeModel02.h DoubDigitOpt.h StrangleOpt.h ButterflyOpt.h
	$(CC) $(CFLAGS) -c OptionPricer05.cpp

clean:
	rm -rf OptionPricer05 *.o
