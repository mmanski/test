//Napisac program który dla ka¿dego wiersza pobranego ze standardowego wejœcia wypisuje na standardowym wyjœciu
//iczbê znaków w wierszu (bez znaku koñca wiersza - bez entera), spacjê i wczytany wiersz.

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string series;
    cout<<"Wprowadz series znakow:"<<endl;
    getline(cin, series);
    cout<<series.size()<<" "<<series;
    return 0;
}
