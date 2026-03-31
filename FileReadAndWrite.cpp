#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];

    //open a text file in write mode
    ofstream outfile;
    outfile.open("afile.txt");

    cout << "Writing to the file" << endl;
    cout << "enter your name: ";
    cin.getline(data, 100);

    //write inputted data into the text file.
    outfile << data << endl;

    cout << "enter your age: ";
    cin >> data;
    cin.ignore();

    //take data into txt file
    outfile << data << endl;

    // close opned file
    outfile.close();

    // open the file in readable from
    ifstream infile;
    infile.open("afile.txt");

    cout << "Readin from the file" << endl;
    infile >> data;

    //write data at the screen.
    cout << data << endl;

    //data reading again
    infile >> data;
    cout << data << endl;

    //close
    infile.close();

     return 0;
}