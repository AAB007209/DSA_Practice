// String Inbuilt functions - strcpy, strcmp, strcat

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];

    cout << strcmp(a, b) << endl; // Returns 1 because the first differing character is in a which is greater than b

    cout << strcmp(b, a) << endl; // Returns -1 because the first differing character is in b which is less than a

    strcpy(b, a); // Copying a into b

    cout << strcmp(a, b) << endl; // Returns 0 as they are equal now

    cout << "String b before concating : " << b << endl;

    char c[] = " banana";
    strcat(b, c);

    cout << "String b before concating : " << b << endl;

    return 0;
}

//- Output
/*

1
-1
0
String b before concating : apple
String b before concating : apple banana

*/