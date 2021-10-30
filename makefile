# makefile for Client using SavingsAccount
Client.exe: Client.o SavingsAccount.o
	g++ -std=gnu++11 -o Client.exe SavingsAccount.o Client.o
Client.o: Client.cpp SavingsAccount.cpp SavingsAccount.h
	g++ -std=gnu++11 -g -c Client.cpp
SavingsAccount.o: SavingsAccount.cpp SavingsAccount.h
	g++ -std=gnu++11 -g -c SavingsAccount.cpp