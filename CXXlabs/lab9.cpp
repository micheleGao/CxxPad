#include <iostream>
#include <string>
#include <cmath>
#include <numeric>
#include <fstream>

using namespace std;

// void max2D(int arr[][20]){
//     int max = arr[0][20];

//     for (int j = 0; j < 10; ++j)
//     {
//         if (arr[j] > max)
//         {
//             max = arr[j];
//         }
//     }
//     cout << "The max: " << max << endl;
// }

void findHighest(float A[][20])
{
    float max;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
        }
    }
    cout << "max:" << max << endl;
}

int main()
{
    const int ROW = 10;
    const int COL = 20;
    float grades1[ROW][COL];

    // int *array = new int[50];
    // int **a2d = new int *[50];
    // int ***a3d = new int **[50];

    // for (int i = 0; i < 50; i++)
    // {
    //     a2d[i] = new int[50];
    //     for (int j = 0; j < 50; j++)
    //     {   int ** ptr = a3d[i];
    //         ptr[j] = new int[50];
    //     }
    // }

    ifstream inputFile;
    inputFile.open("grades.txt");
    if (!inputFile)
        cout << "Nope!";
    while (!inputFile.eof())
    {

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                inputFile >> grades1[i][j];
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                cout << "Element at x[" << i
                     << "][" << j << "]: ";
                cout << grades1[i][j] << endl;
            }
        }
        inputFile.close();
    }

    // an array with 3 rows and 2 columns.
    int x[3][2] = {{0, 1}, {2, 3}, {4, 5}};

    // output each array element's value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j] << endl;
        }
    }

    findHighest(grades1);
}
// }