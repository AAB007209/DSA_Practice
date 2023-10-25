//- Shortest Route - Displacement

/*
Input is given in the direction and the output should also be the shortest route direction
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char route[1000];
    cin.getline(route, 1000);

    // cout << route << endl;

    int x = 0; // For holding E and W directions along X-axis
    int y = 0; // For holding N and S directions along Y-axis
    int i = 0;

    while (route[i] != '\0')
    {
        switch (route[i])
        {
        case 'N':
            y++;
            i++;
            break;

        case 'S':
            y--;
            i++;
            break;

        case 'E':
            x++;
            i++;
            break;

        case 'W':
            x--;
            i++;
            break;

        default:
            break;
        }
    }

    // cout << x << " " << y << endl;

    // First Quadrant
    if (x >= 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x--)
        {
            cout << "E";
        }
    }

    // Second Quadrant
    else if (x < 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x++)
        {
            cout << "W";
        }
    }

    // Third Quadrant
    else if (x < 0 and y < 0)
    {
        while (y++)
        {
            cout << "S";
        }
        while (x++)
        {
            cout << "W";
        }
    }

    // Fourth Quadrant
    else if (x >= 0 and y < 0)
    {
        while (y++)
        {
            cout << "S";
        }
        while (x--)
        {
            cout << "E";
        }
    }

    return 0;
}

//- Output:
/*

Input 1- SNNNEWE
Output - NNW

Input 2 - NNEWSSEWSEN
Output - E

*/