#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream myfile("example.txt");

    if (myfile.is_open())
    {
        myfile << "This is a line. \n";
        myfile << "This is another line. \n";
        myfile.close();
    }
    else 
    {
        cout << "Unable to open file.";
    }

     
    string line;

    ifstream infile("example.txt");
    if(infile.is_open())
    {
        while(getline(infile,line))
        {
            cout << line << '\n';
        }
        infile.close();
    }
    else
    {
        cout << "unable to open file";
    }
   
    return 0;
}