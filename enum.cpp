#include <iostream>
enum DAY {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};
using namespace std;

int main()
{
   DAY day;
   day = MONDAY;
   switch(day) {
    case 0: cout << "MONDAY"; break;
    case 1: cout << "TUESDAY"; break;
    // etc.
}
   
   return 0; 
}