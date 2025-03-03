//
//  main.cpp
//  Project_2_CS210
//
//  Created by ED ALI on 2/9/25.
//

#include "InvestmentCalculator.h"
#include <iostream>

using namespace std;

int main() {
    double initialInvestment, monthlyDeposit, annualInterestRate;
    int numberOfYears;
    
    cout << "Welcome to the Airgead Banking Investment Calculator!\n";
    cout << "Enter initial investment amount: ";
    cin >> initialInvestment;
    while (initialInvestment <= 0) {
        cout << "Please enter a positive amount: ";
        cin >> initialInvestment;
    }
    
    cout << "Enter monthly deposit amount: ";
    cin >> monthlyDeposit;
    while (monthlyDeposit < 0) {
        cout << "Please enter zero or a positive amount: ";
        cin >> monthlyDeposit;
    }
    
    cout << "Enter annual interest rate (percentage): ";
    cin >> annualInterestRate;
    while (annualInterestRate <= 0) {
        cout << "Please enter a positive percentage: ";
        cin >> annualInterestRate;
    }
    cout << "Enter number of years for investment: ";
        cin >> numberOfYears;
        while (numberOfYears <= 0) {
            cout << "Please enter a positive number of years: ";
            cin >> numberOfYears;
        }
        
        InvestmentCalculator investment(initialInvestment, monthlyDeposit, annualInterestRate, numberOfYears);
        investment.displayResults();
        
        cout << "\nThank you for using the Airgead Banking Investment Calculator!\n";
        return 0;
    }
