#include <iostream>
using namespace std;

int main()
{
/*    cout << "Size of char : " << sizeof(char) << endl; 
   cout << "Size of int : " << sizeof(int) << endl; 
   cout << "Size of short int : " << sizeof(short int) << endl; 
   cout << "Size of long int : " << sizeof(long int) << endl; 
   cout << "Size of float : " << sizeof(float) << endl; 
   cout << "Size of double : " << sizeof(double) << endl; 
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl; 
 */    
    
 /* local varialble declaration
   int a, b;
   int c;

   // variable initialization
   a = 10;
   b = 20;
   c = a + b;

   cout << c; 
 */   

  // using const
  const int LENGTH = 10;
  const int WIDITH = 5;
  const char NEWLINE = '\n';
  int area;
  
  area = LENGTH * WIDITH;
  cout << area;
  cout << NEWLINE;
       
 return 0;

}