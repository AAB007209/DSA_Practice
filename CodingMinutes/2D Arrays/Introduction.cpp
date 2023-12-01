//- 2D Arrays - Introduction + Spiral Print Problem
/*

=> How 2D arrays are stored in the memory ?
-> Basically in memory everything must be linearised.
-> 2 common ways of storing the arrays - 1. Row Major Form and 2. Column Major Form

* Mentioning the row size is optional for a called function but column size is mandatory

*/

/*
    //int 2-D array
    int arr[][100];

    //2-D character array
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "four",
        "eighty",
        "hundred",
    };
    */

#include <bits/stdc++.h>
using namespace std;

void printSprialArray(int arr[][10], int n, int m)
{
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    // Outer loop traverse the array boundary
    while (startCol <= endCol and startRow <= endRow)
    {
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col] << " ";
        }

        for (int row = startRow + 1; row <= endRow; row++)
        {
            cout << arr[row][endCol] << " ";
        }

        for (int col = endCol - 1; col >= startCol; col--)
        {
            cout << arr[endRow][col] << " ";
        }

        for (int row = endRow - 1; row >= startRow + 1; row--)
        {
            // This check is for avoiding duplicates printing.
            if (startCol == endCol)
            {
                break;
            }
            cout << arr[row][startCol] << " ";
        }

        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    int n = 4, m = 4;
    int arr[][10] = {
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}};

    printSprialArray(arr, n, m);

    return 0;
}

/*
Output:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
*/