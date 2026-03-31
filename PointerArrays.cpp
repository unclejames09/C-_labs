#include <iostream>
using namespace std;

int main ()
{
    int numberArrays[5];
    int* pPointer = nullptr;
    
    //asinging address to first element to pointer
    pPointer = numberArrays;
    *pPointer = 10;

    //using pointer arithemetic
    //increment operator
    pPointer++;
    *pPointer = 20; // assign value to 2nd element 

    pPointer = &numberArrays[2];
    *pPointer = 30; // assign value yo third element
    
    pPointer = numberArrays + 3;
    *pPointer = 40; // assigning value to 4th element

    //first element again
    pPointer = numberArrays;
    *(pPointer+4) = 50;

    //output using loop
    for (int n = 0; n < 5; n++)
    {
        cout << numberArrays[n] << ", ";
    }
    return 0;
}