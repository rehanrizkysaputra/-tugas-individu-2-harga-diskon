// diskon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<typeinfo>
using namespace std;

int main()
{
    //harga sesudah diskon;
    //15000-(12.5/100*150000)
    int hargakaos = 150000;
    double diskon = 12.5;

        int hargadiskon = hargakaos*(diskon / 100);
    int hargasetelahdiskon = hargakaos - hargadiskon;

    cout << "harga:" << hargakaos << "ribu" << endl;
    cout << "diskon:" << diskon << endl;
    cout << "besar diskon dari harga:" << hargadiskon << endl;
    cout << "harga setelah diskon=" << hargasetelahdiskon << "ribu" << endl;


    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
