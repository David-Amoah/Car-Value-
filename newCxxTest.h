//Copyright 2023
//Author: David Amoah

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>

#include "Car.h"
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyCar() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        Car myCar;

        myCar.SetModelYear(1980);
        int model_year = myCar.GetModelYear();
        TS_ASSERT_EQUALS(model_year, 1980);


        myCar.SetPurchasePrice(20000);
        int purchase_price = myCar.GetPurchasePrice();
        TS_ASSERT_EQUALS(purchase_price, 20000);


        myCar.CalcCurrentValue(2023);
        TS_ASSERT_EQUALS(myCar.GetCurrentValue(),18);

        myCar.PrintInfo();

    }
};
#endif /* NEWCXXTEST_H */
