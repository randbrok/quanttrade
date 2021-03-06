#pragma once

#include "Calculator.h"

#include <iostream>

class CalculatorExplicit
    : public Calculator
{
public:
    CalculatorExplicit(
        const double strike,
        const double maturity,
        const double volatility,
        const double interestRate,
        const double dividend,
        const std::size_t numberOfTimeSteps,
        const double spaceStepSize);
    virtual ~CalculatorExplicit();

    virtual double calculateUpperValue() const;
    virtual double calculateMiddleValue() const;
    virtual double calculateLowerValue() const;
    
private:
    const double _strike;
    const double _volatility;
    const double _interestRate;
    const double _dividend;
    const double _timeStepSize;
    const double _spaceStepSize;
    const double _drift;
};

