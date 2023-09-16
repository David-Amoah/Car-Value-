//Copyright 2023
//Author: David Amoah

#ifndef CAR_VALUE_HW_CAR_H
#define CAR_VALUE_HW_CAR_H



class Car {
private:
    int modelYear;
    // TODO: Declare purchasePrice member (int)
    int purchasePrice;
    double currentValue;

public:
    void SetModelYear(int userYear);

    int GetModelYear() const;

    // TODO: Declare SetPurchasePrice() function
    void SetPurchasePrice(int userPrice);

    // TODO: Declare GetPurchasePrice() function
    int GetPurchasePrice() const;

    void CalcCurrentValue(int currentYear);

    int GetCurrentValue() const;

    // TODO: Declare PrintInfo() method to output modelYear, purchasePrice, and
    // currentValue
    void PrintInfo();

};


#endif //CAR_VALUE_HW_CAR_H
