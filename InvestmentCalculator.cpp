//
//  InvestmentCalculator.cpp
//  Project_2_CS210
//
//  Created by ED ALI on 2/9/25.
//


#include "InvestmentCalculator.h"
#include <iostream>
#include <iomanip>

using namespace std;

InvestmentCalculator::InvestmentCalculator(double initInvestment, double monthDeposit, double interestRate, int years) {
    initialInvestment = initInvestment;
    monthlyDeposit = monthDeposit;
    annualInterestRate = interestRate;
    numberOfYears = years;
}

void InvestmentCalculator::calculateWithoutMonthlyDeposits() {
    double balance = initialInvestment;
    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    for (int i = 1; i <= numberOfYears; i++) {
        double interest = balance * (annualInterestRate / 100);
        balance += interest;
        cout << i << "\t$" << fixed << setprecision(2) << balance << "\t$" << interest << "\n";
    }
}

void InvestmentCalculator::calculateWithMonthlyDeposits() {
    double balance = initialInvestment;
    cout << "\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    for (int i = 1; i <= numberOfYears; i++) {
        double yearlyInterest = 0;
        for (int j = 0; j < 12; j++) {
            balance += monthlyDeposit;
            double monthlyInterest = (balance * (annualInterestRate / 100)) / 12;
            balance += monthlyInterest;
            yearlyInterest += monthlyInterest;
        }
        cout << i << "\t$" << fixed << setprecision(2) << balance << "\t$" << yearlyInterest << "\n";
    }
}

void InvestmentCalculator::displayResults() {
    calculateWithoutMonthlyDeposits();
    calculateWithMonthlyDeposits();
}
