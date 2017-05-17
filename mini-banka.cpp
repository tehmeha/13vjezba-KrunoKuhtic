#include<iostream>
using namespace std;

int main()
{
    cout << "Glavni izbornik" << endl;
    cout << "1. Unos nove osobe" << endl;
    cout << "2. Ispisi podatke" << endl;
    cout << "3. pretraga prema racunu" << endl;
    cout << "4. Pretraga prema prezimenu" << endl;
    cout << "5. Ispisi sortirano" << endl;
    int izbor;
    cin >> izbor;

    unsigned long long int brRacuna[50];
    string prezimeIme[50];
    float saldo[50];
    int brojKlijenta = 0;
    if ( izbor == 1 )
    {
        cout<< "Unesite broj racuna"
        cin>>brRacuna[brojKlijenta]
        cout<< "Unesite prezime i ime"
        getline(cin, prezimeIme[brojKlijenta]);
        saldo[brojKlijenta] = 0;
        brojKlijenta++;


    }
}
