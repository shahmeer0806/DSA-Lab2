#include <iostream>
using namespace std;

//Function that analyzes the pointer
void analyze_pointer(int* ptr) {
    cout << "Memory Allocation: " << ptr << endl;

    cout << "Value: " << *ptr << endl;
}


int main() {

    //STACK ALLOCATION
    int init_val;
    cout << "Enter a Value: ";
    cin >> init_val;

    cout << "Stack Variable: " << endl;
    analyze_pointer(&init_val); //Printing func result for stack value

    //HEAP ALLOCATION
    int* h_val = new int;

    cout << "Enter a value for the heap variable: ";
    cin >> *h_val;

    cout << "Heap variable:" << endl;
    analyze_pointer(h_val); //Printing function result for heap value

    delete h_val; //Freeing heap memory

    system("pause");
    return 0;
}
