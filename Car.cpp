//Copyright 2023
//Author: David Amoah


#include <iostream>
#include <iomanip>
#include <cmath>

#include "Car.h"



void Car::SetModelYear(int userYear) {
    modelYear = userYear;
}

int Car::GetModelYear() const {
    return modelYear;
}

// TODO: Implement SetPurchasePrice() function
void Car::SetPurchasePrice(int userPrice) {
    purchasePrice = userPrice;
}


// TODO: Implement GetPurchasePrice() function

int Car::GetPurchasePrice() const {
    return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
    double depreciationRate = 0.15;
    int carAge = currentYear - modelYear;

    // Car depreciation formula
    currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

int Car::GetCurrentValue() const {
    return currentValue;
}


// TODO: Implement PrintInfo() function to output modelYear, purchasePrice, and
// currentValue

void Car::PrintInfo() {
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Car's information:" << std::endl;
    std::cout << "  Model year: " << modelYear << std::endl;
    std::cout << "  Purchase price: $" << purchasePrice << std::endl;
    std::cout << "  Current value: $" << currentValue << std::endl;
}



#include "Car.h"
