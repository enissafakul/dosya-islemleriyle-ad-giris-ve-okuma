/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string ad;
    cout << "Adinizi girin: ";
    getline(cin, ad);

    ofstream dosya("deneyap.txt");
    dosya << ad;
    dosya.close();

    ifstream oku("deneyap.txt");
    string okunan;
    getline(oku, okunan);
    cout << "Dosyadan okunan ad: " << okunan;
}
