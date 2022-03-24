// *********************************************************************************
// **************************** Do not modify this file ****************************
// *********************************************************************************

#include <iostream>
#include <iomanip>

#include "StockMonthlyData.h"

using namespace std;

// A function for printing the summary from a StockMonthlyData instance
void printSummary(StockMonthlyData *stockMonthlyData) {

  cout << fixed << setprecision(2);

  double *summary = stockMonthlyData->summary();

  cout << setw(7) << "Name: " << stockMonthlyData->getMonthName() << endl;
  cout << setw(7) << "Days: " << stockMonthlyData->getNumberDays() << endl;
  cout << setw(7) << "Min: $" << summary[0] << endl;
  cout << setw(7) << "Max: $" << summary[1] << endl;
  cout << setw(7) << "Avg: $" << summary[2] << endl;

//   delete summary;

  cout << endl;
}

int main() {

  // *********************************************************************************
  // **************************** Do not modify this file ****************************
  // *********************************************************************************
  StockMonthlyData *dow30;
  StockMonthlyData *nasdaq;
  StockMonthlyData *gold;

  {
    const double DOW_30_PRICES[] = { 34726.32761, 34160.85459, 34169.05363, 34298.37059, 34365.32440, 34265.91635, 34716.34565, 35028.79296, 35368.61203, 35912.73242, 36114.25227, 36290.94140, 36252.35003, 36069.03474, 36232.24749, 36236.83022, 36407.78434, 36799.91072, 36585.20642, 36338.52842, 36398.78739, 36489.55900, 36399.12892, 36302.42295, 35950.58620, 35754.66468, 35492.72020, 34932.41156, 35366.18416, 35897.75765, 35643.95833 };
    const double NASDAQ_PRICES[] = { 12844.32981, 12844.17057, 13130.34892, 13255.93352, 12795.83060, 12831.58006, 13313.52316, 13538.79543, 13752.17175, 13532.81221, 13752.32292, 13695.18354, 13473.81826, 13037.71350, 13382.46549, 13548.21023, 13717.11304, 14124.99340, 14140.02055, 13791.05187, 13791.40095, 14185.73600, 14490.84677, 14194.54424, 14015.70526, 14098.24877, 13879.18866, 14417.78354, 14346.51515, 14240.67494 };
    const double GOLD_PRICES[] = { 1993.18912, 1982.95852, 1998.28416, 1986.21007, 2040.31792, 1994.05706, 1965.78144, 1934.84380, 1921.33307, 1942.91758, 1900.39719, 1886.98944, 1925.60740, 1909.22558, 1906.44218, 1898.76101, 1901.09005, 1870.88331, 1855.31720, 1868.32880, 1841.26619, 1836.91704, 1835.78286, 1826.78343, 1820.92400, 1806.79810, 1803.92851, 1809.82923 };

    // create an instance for each prices array
    dow30 = new StockMonthlyData("Dow30", 31, DOW_30_PRICES);
    nasdaq = new StockMonthlyData("Nasdaq", 30, NASDAQ_PRICES);
    gold = new StockMonthlyData("Gold", 28, GOLD_PRICES);
  }

  // print summaries
  printSummary(dow30);
  printSummary(nasdaq);
  printSummary(gold);

  // print the table for Gold prices
  cout << gold->aSTable().str() << endl;

  delete dow30;
  delete nasdaq;
  delete gold;

  return 0;
}