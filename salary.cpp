#include <iostream>
using namespace std;

int main() {
	const int size = 20;

	//Setting up a dynamic array
	int* salArray = new int[size];

	// Input salaries
	for (int i = 0; i < size; i++) {
		cout << "Enter Salary for employee " << (i + 1) << ": ";
		cin >> *(salArray + i);
	}

	// Apply increment formula
	for (int i = 0; i < size; i++) {
		*(salArray) = *(salArray + i) + *(salArray + i) / (i + 1);
	}

	// Display updated salaries
	cout << "\nUpdated Salaries: ";
	for (int i = 0; i < size; i++) {
		cout << *(salArray + i) << " ";
	}

	cout << endl;

	//Freeing up dynamic memory
	delete[] salArray;

	system("pause");
	return 0;

}
