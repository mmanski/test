//Napisac program który dla ka¿dego wiersza pobranego ze standardowego wejœcia wypisuje na standardowym wyjœciu
//iczbê znaków w wierszu (bez znaku koñca wiersza - bez entera), spacjê i wczytany wiersz.

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string ciag;
    cout<<"Wprowadz ciag znakow:"<<endl;
    getline(cin, ciag);
    cout<<ciag.size()<<" "<<ciag;
    return 0;
}
