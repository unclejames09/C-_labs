#include <iostream>
using namespace std;

int main()
{
  //declare pointer and initialse to not store random address
  int* pPointer = nullptr;
  
  int intergerVar = 5;
   
  //assign pointer to address of object
  pPointer = &intergerVar;

  //output value od intvar
  cout << "intergerVar: " << intergerVar << endl;
  
  //output address
  cout << "Address of intergerVar: " << &intergerVar << endl;

  //output address of pPoINTER
  cout << "pPointer: " << pPointer << endl;

  //out address of pointer
  cout << "Address of pPointer: " << &pPointer << endl;

    return 0;
}