/*	Implementation for SavingsAccount
*	@file SavingsAccount.cpp
*	@author Emily Louk
*/
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(){
   interestRate = 0;
   balance = 0;
}


SavingsAccount::SavingsAccount(double i, double b){
   interestRate = i;
   balance = b;
}

double SavingsAccount::getInterestRate() {
   return interestRate;
}

double SavingsAccount::getBalance(){
   return balance;
}

void SavingsAccount::setInterestRate(double i){
   interestRate = i;
}

void SavingsAccount::setBalance(double b){
   balance = b;
}

void SavingsAccount::withdrawal(double amount){
   balance = balance - amount;
}

void SavingsAccount::deposit(double amount){
   balance = balance + amount;
}

void SavingsAccount::addMonthlyInterest(){
   double monthlyInterest = interestRate / 12;
   balance = balance + (monthlyInterest * balance);
}