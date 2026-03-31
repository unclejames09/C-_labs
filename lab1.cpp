#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> msg {"Hello", "c++", "VS code", "and the c++ extenstion!"};

    for (const string& word : msg){
        cout << word << " ";
    }
    cout << endl; 
}