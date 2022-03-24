#include "StockMonthlyData.h"


// constructs an instance with the values passed in through the parameters.
// The constructor initializes arrStockPrices to size equal to numberOfDays and copies the data
// from the array parameter arrStockPrices to the class's array arrStockPrices
StockMonthlyData ::StockMonthlyData(const string monthName, const int numberOfDays, const double *arrStockPrices)
{
    
    this->arrStockPrices = new double[numberOfDays];
    this->numberOfDays = numberOfDays;
    this->monthName = monthName;
    for(int i = 0; i < numberOfDays ; i++){
       this-> arrStockPrices[i] = arrStockPrices[i];
    }
    
}

StockMonthlyData ::~StockMonthlyData()
// deallocates dynamic memory created by the class
{
    delete[] arrStockPrices;
}

// returns the value of monthName
string StockMonthlyData ::getMonthName() const
{
    return monthName;
}

// returns the value of numberOfDays
int StockMonthlyData::getNumberDays() const
{
    return numberOfDays;
}

// returns the number of days the price was less than the parameter limit
int StockMonthlyData::daysLessThan(double limit) const
{
    int counter = 0;
    for (int i = 0; i < numberOfDays; i++)
    {
        if (arrStockPrices[i] < limit)
        {
            counter++;
        }
    }
    return counter;
}

// returns an array containing the minimum, maximum, and average price during the month
// calling functions are responsible for deallocating the memory for the returned array
double *StockMonthlyData ::summary() const
{
    float sum = 0;
    for (int count = 0; count < numberOfDays; count++)
    {
        sum += arrStockPrices[count];
    }
     cout << "\n The  sum is " << sum << endl;

    double average = sum / numberOfDays;
    cout << "\n Average is :  " << average << endl;


    float max = arrStockPrices[0];
    for (int count = 1; count < numberOfDays; count++)
    {
        if (arrStockPrices[count] > max)
        {

            max = arrStockPrices[count];
        }
    }
    cout << "\nThe MAX is " << max << endl;

    int minIDX = arrStockPrices[0];
    for (int i = 1; i < numberOfDays; i++)
    {
        if (arrStockPrices[i] < minIDX)
        {
            minIDX = arrStockPrices[i];
        }
    }
    cout << "This is the min: " << minIDX << endl;

    double *arr = new double [3];
    arr[0]=minIDX;
    arr[1]=max;
    arr[2]=average;

    return arr;
}

// Returns a formatted table of the stock's data. The functions uses in-memory formatting to return the table:
//  --------------------
// | #      | Price     |
//  --------------------
//

ostringstream StockMonthlyData::aSTable() const
{
    ostringstream memFormat;
    memFormat << setfill('-') << setw(40) << " " << endl;
    cout << memFormat.str();
    cout << "|" <<setw(11)  << " # " << setw(11) << " | " << setw(11) << "prices" << setw(6) << "|" << endl;
    for (int i = 0; i < numberOfDays; i++)
    {
        cout << memFormat.str() <<  "|" <<setw(11)  << i << setw(11) << "|" << setw(11) << this->arrStockPrices[i] << setw(6)  << "|" << endl;
    }
   
    return memFormat;
}
