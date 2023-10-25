//- Largest String

/*
Problem : Read N Strings and print the largest String. Each string can have upto 1000 characters
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\nEnter the No.of Inputs : ";
    int n;
    cin >> n;

    cin.get();

    char sentence[1000];
    char largest[1000];

    int largest_len = 0;

    while (n--)
    {
        cin.getline(sentence, 1000);

        int len = strlen(sentence);
        if (len > largest_len)
        {
            largest_len = len;
            strcpy(largest, sentence);
        }
    }

    cout << "\nLargest Sentence is : " << largest << endl;

    return 0;
}

//- Output
/*

Enter the No.of Inputs : 4
Hello world
Coding Minutes is good course to learn from
Dynamic Programming is little hard when compared to other topics
Coding requires consistency and dedication

Largest Sentence is : Dynamic Programming is little hard when compared to other topics

*/