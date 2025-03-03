//
//  InvestmentCalculator.h
//  Project_2_CS210
//
//  Created by ED ALI on 2/9/25.
//

#ifndef INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_H

class InvestmentCalculator {
private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterestRate;
    int numberOfYears;

public:
    InvestmentCalculator(double initInvestment, double monthDeposit, double interestRate, int years);
    void calculateWithoutMonthlyDeposits();
    void calculateWithMonthlyDeposits();
    void displayResults();
};

#endif
