#include <iostream>
#include <array> //stl library for array

using namespace std;

int main()
{
    int basic[3] = {1, 2, 3}; // Normal way to create a static array

    array<int, 4> a = {1, 2, 3, 4}; // STL array which is also static

    // STL array: Also static and based on the traditional array,
    // but comes with additional functionalities.

    int size = a.size(); // Get the size of the STL array

    for (int i = 0; i < size; i++)
    { // Printing elements of the STL array
        cout << a[i] << endl;
    }

    // functions available with STL array:

    cout << "element at 2nd index: " << a.at(2) << endl; // accesing a particular element

    cout << "empty or not: " << a.empty() << endl; // checking if array is empty

    cout << "front element: " << a.front() << endl; // getting the front element

    cout << "back element: " << a.back() << endl; // getting the last element

    // Additional functions like 'fill' and 'swap' are also available in STL arrays.
}