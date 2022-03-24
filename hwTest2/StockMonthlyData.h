// *********************************************************************************
// **************************** Do not modify this file ****************************
// *********************************************************************************

#ifndef STOCKMONTHLYDATA_H_
#define STOCKMONTHLYDATA_H_

#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * StockMonthlyData.h
 *
 *  Assignment 2
 *
 *  The class holds data and operations relating to a stock's monthly data
 */
class StockMonthlyData {

  private:
    // holds the month name
    string monthName;

    // holds the number of days. This is also the size of the array
    int numberOfDays;

    // holds the stock's price information. The size of the array is equal to numberOfDays
    double *arrStockPrices;

  public:

    // constructs an instance with the values passed in through the parameters.
    // The constructor initializes arrStockPrices to size equal to numberOfDays and copies the data
    // from the array parameter arrStockPrices to the class's array arrStockPrices
    StockMonthlyData(const string monthName, const int numberOfDays, const double *arrStockPrices);

    // deallocates dynamic memory created by the class
    virtual ~StockMonthlyData();

    // returns the value of monthName
    string getMonthName() const;

    // returns the value of numberOfDays
    int getNumberDays() const;

    // returns the number of days the price was less than the parameter limit
    int daysLessThan(double limit) const;

    // returns an array containing the minimum, maximum, and average price during the month
    // calling functions are responsible for deallocating the memory for the returned array
    double* summary() const;

    // Returns a formatted table of the stock's data. The functions uses in-memory formatting to return the table:
    //  --------------------
    // | #      | Price     |
    //  --------------------
    //
    ostringstream aSTable() const;
};


#endif /* STOCKMONTHLYDATA_H_ */