#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int size;
    cout << "Enter string size: ";
    cin >> size;

    //Dynamic allocation of memory for string
    char* str = new char[size + 1];

    cout << "Enter the string: ";
    cin >> *str;

    //Finding string length
    int len = strlen(str);

    //Reversing string
    for (int i = 0; i < len / 2; i++) {
        char x = str[i]; // Swap characters with temporary variable

        str[i] = str[len - 1 - i];

        str[len - 1 - i] = x;
    }

    //Displaying reversed string
    cout << "Reversed string: " << str << endl;

    //Free dynamically allocated memory
    delete[] str;

    return 0;
}
