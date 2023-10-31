### Coding Minutes - Section 5 : Character Arrays / Strings

#### Quiz Questions

1. What will be the output of the following code ?
   ```C++
    int main() {
        char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
        int result;
    
        result = strcmp(str1, str2);
        cout << result;
    
        result = strcmp(str1, str3);
        cout << result;
    
        return 0;
    }
   
   ```
   * 1 0
   * 0 0
   * 0 1
   * 1 1

---
2. Find the output of the following program 
   ```C++
    int main(){ 
        char ch[] = “Coding Minutes”;
        int l = strlen(ch);
        cout << l << endl;
    }
   ```
   * 12
   * 13
   * 14
   * Compilation Error

---
3. What will be the output of the following C++ code ?
   ```C++
    #include <iostream>
    using namespace std;
    int main( ){
        char line[100];
        cin.getline( line, 100, 't' );
        cout << line;
        return 0;
    }
   ```
   * 100
   * t
   * It will print what we enter till character t is encountered in the input data
   * 200
  
---
4. What is Character-Array ?
   * array of alphabets
   * array of well-defined characters
   * array of characters 
   * array of characters terminated by '\0'
  
---
5. Which function is used to determine a string object's length
   * str.length()
   * str.size()
   * str.max_size()
   * both size() and length() function