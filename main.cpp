//Napisac program kt�ry dla ka�dego wiersza pobranego ze standardowego wej�cia wypisuje na standardowym wyj�ciu
//iczb� znak�w w wierszu (bez znaku ko�ca wiersza - bez entera), spacj� i wczytany wiersz.

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
