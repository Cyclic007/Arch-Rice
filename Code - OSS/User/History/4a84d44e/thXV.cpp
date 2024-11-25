#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string potato;
    istream poem("/home/cyclic/He did not wear his scarlet coat,");
    while(!poem.fail()){
        getline(poem,potato);
        cout << potato;
        cout << endl;
    }
    
    poem.cose();
    return 0;
}