//- Introduction to Strings or Character Arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100]; // One way of declaring array of char's/Strings

    char b[] = {'a', 'b', 'c'}; // Wrong way of initialization because garbage values can get added at the end.

    char c[] = {'a', 'b', 'c', 'd', '\0'}; // Right way of initialization because '\0' character added at the last ends the char array without adding any garbage value

    char d[] = "abcdefgh"; // Another Right way of initializing char array.

    cout << b << endl; // Output - abc±dçv
    cout << c << endl; // Output - abcd
    cout << d << endl; // Output - abcdefgh

    //- Below code is for taking string input as a whole usign "cin.get()"
    char sentence[1000];
    char temp = cin.get();

    int len = 0;
    while (temp != '#') // While loop stops when it encounters # from the user
    {
        sentence[len++] = temp; // storing words into sentence array
        temp = cin.get();       // getting next world
    }
    sentence[len] = '\0';                  // Appending null character at the end of the sentence string to mark the end of the string
    cout << "Length is : " << len << endl; // Printing the length of the sentence string
    cout << sentence << endl;              // Printing the whole input which even included Whitespace in between.

    //- Below is the code for "cin.getline()" inbuilt function use-case instead of "cin.get()" function
    char paragraph[1000];
    cin.getline(paragraph, 1000, '\n'); // Parameters are (array for storing, limit of that array, terminating condition(Optinal))
    cout << paragraph << endl;

    return 0;
}

//- Output for cin.get() function
/*
    Hello World welcome to the world of C++#
    Length is : 39
    Hello World welcome to the world of C++
*/

//, Points to Remember
/*
- Size of automatically calculated if it is not defined and the array is Initialized.
- Append '\0' character at the end of the char array to avoid it from adding garbage values to the char array at the end.

*/