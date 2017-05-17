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
        cout<< "Unesite broj racuna";
        cin>>brRacuna[brojKlijenta];
        cout<< "Unesite prezime i ime";
        cin.ignore();
        getline(cin, prezimeIme[brojKlijenta]);
        saldo[brojKlijenta] = 0;
        brojKlijenta++;
    }
    else if (izbor == 2 )
    {
        for( int i = 0; i < brojKlijenta; i++)
        {
            cout << brRacuna[i] << " " <<prezimeIme[i] << "saldo: " << saldo[i] <<endl;
        }
    }
    else if ( izbor == 3)
    {
        cout << "Unesite broj racuna koji zelite pronaci";
        unsigned long long int brracuna;
        cin >> brracuna;
        for (int i=0; i < brojKlijenta; i++ )
        {
            if (brracuna == brRacuna[i])
            {
                cout << "Osoba je pronaðena."<<endl;
                break;
            }
        }
    }
}
