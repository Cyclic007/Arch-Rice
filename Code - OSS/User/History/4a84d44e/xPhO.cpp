#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string info = "\n\tThe Ballad of reading Gaol";
    info.append("\n\t\tOscar Wilde 1898");
    info.append("\n\t\tOscar Wildeee 1899");
    info.append("\nYet each man kills the thing he loves");
    info.append("\nBy each let this be herd,\n some do it ");
    ofstream poem("poem.txt");
    
    return 0;
}