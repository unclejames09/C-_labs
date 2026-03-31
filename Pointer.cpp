#include <iostream>
using namespace std;

int main() 
{
     int firstValue;
     int secondValue;

     int* pPointer = nullptr;
      
     //assing pointer values of the variables
     pPointer = &firstValue;
     *pPointer = 10; //indirection
     
     //assing pointer to 2nd value
     pPointer = &secondValue;
     *pPointer = 20;

     cout << "firstValue is " << firstValue << '\n';
     cout << "secondValue is " << secondValue << '\n';
     
    return 0;
}