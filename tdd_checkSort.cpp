#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size) {

    // Compare every element with the next
    for (int i = 0; i < size - 1; i++) {

        // If current element is greater than next element,not sorted.
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    // If no problem found, array sorted
    return true;
}

void testSortedArray() {

    int nums[] = { 1, 2, 3, 4, 5 };
    bool res = isSorted(nums, 5);
    assert(res == true);
    cout << "Test 1 Passed: Sorted array" << endl;
}

void testUnsortedArray() {

    int nums[] = { 1, 4, 3, 5, 6 };
    bool res = isSorted(nums, 5);
    assert(res == false);
    cout << "Test 2 Passed: Unsorted array" << endl;
}

void testDuplicateValues() {
    int nums[] = { 1, 2, 2, 3, 5 };
    bool res = isSorted(nums, 5);
    assert(res == true);
    cout << "Test 3 Passed: Duplicate values" << endl;
}

void testSingleElement() {
    int nums[] = { 10 };
    bool res = isSorted(nums, 1);
    assert(res == true);
    cout << "Test 4 Passed: Single element" << endl;
}

void testDescendingArray() {
    int nums[] = { 5, 4, 3, 2, 1 };
    bool res = isSorted(nums, 5);
    assert(res == false);
    cout << "Test 5 Passed: Descending array" << endl;
}

void testNegativeValues() {
    int nums[] = { -5, -3, -2, -1, 0 };
    bool res = isSorted(nums, 5);
    assert(res == true);
    cout << "Test 6 Passed: Negative values" << endl;
}

void testAllSame() {
    int nums[] = { 7, 7, 7, 7 };
    bool res = isSorted(nums, 4);
    assert(res == true);
    cout << "Test 7 Passed: All elements same" << endl;
}

void testTwoElementsUnsorted() {
    int nums[] = { 2, 1 };
    bool res = isSorted(nums, 2);
    assert(res == false);
    cout << "Test 8 Passed: Two elements unsorted" << endl;
}

int main() {
    cout << "Running tests" << endl;

    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllSame();
    testTwoElementsUnsorted();

    cout << "All tests passed!" << endl;

    return 0;
}
