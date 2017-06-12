#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    unsigned long long int brRacuna[50];
    string prezimeIme[50];
    float saldo[50];
    int brojKlijenta = 0;
    ofstream datotekaUpisivanje;
    ifstream datotekaUcitavanje;
    datotekaUcitavanje.open("banka.txt");
    while(1)
    {
        datotekaUcitavanje >> brRacuna[brojKlijenta];
        if(datotekaUcitavanje.eof() == true)
        {
            break;
        }
        datotekaUcitavanje.ignore();
        getline(datotekaUcitavanje, prezimeIme[brojKlijenta]);
        datotekaUcitavanje >> saldo[brojKlijenta];
        brojKlijenta++;
    }
    datotekaUcitavanje.close();
    while(1)
    {

        cout << endl;
        cout << "Glavni izbornik" << endl;
        cout << "1. Unos nove osobe" << endl;
        cout << "2. Ispisi podatke" << endl;
        cout << "3. pretraga prema racunu" << endl;
        cout << "4. Pretraga prema prezimenu" << endl;
        cout << "5. Ispisi sortirano" << endl;
        cout << "6. Izlaz iz programa" << endl;
        int izbor;
        cin >> izbor;

          if(izbor ==1 )
         {
             cout<< "Unesite broj racuna: ";
             cin>>brRacuna[brojKlijenta];
             cout<< "Unesite prezime i ime: ";
             cin.ignore();
             getline(cin, prezimeIme[brojKlijenta]);
             cout<< "Unesite saldo: ";
             cin>>saldo[brojKlijenta];

             brojKlijenta++;
         }
         else if (izbor == 2 )
         {
             for( int i = 0; i < brojKlijenta; i++)
             {
                 cout << brRacuna[i] << " " <<prezimeIme[i] << " saldo: " << saldo[i] <<endl;
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
                     cout << "Osoba je pronadjena."<<endl;
                     cout << brRacuna[i] << " " <<prezimeIme[i] << " saldo: " << saldo[i] <<endl;
                     break;
                 }
            }
        }
        else if (izbor == 4)
        {
            string naziv;
            cout << " upisite prezime osobe; ";
                cin.ignore();
                getline( cin, naziv);
                bool pronadjen = false;
                for(int i = 0; i< brojKlijenta; i++)
                {
                     if(naziv == prezimeIme[i])
                    {
                        cout << brRacuna[i] <<  "\t";
                        cout << prezimeIme[i] << "\t";
                        cout << saldo[i] << "\t";
                        pronadjen=true;
                        break;

                    }
                    if(pronadjen == false)
                    {
                        cout << "osoba ne postoji:";
                    }
                }
        }
        else if (izbor == 5)
        {
            int n = brojKlijenta;
            string temp;
            for ( int kraj = n-1; kraj >= 0; kraj --)
            {
                for(int i = 0; i < kraj; i++)
                {
                    if (prezimeIme[i] >prezimeIme[i+1])
                    {
                        temp=prezimeIme[i];
                        prezimeIme[i]=prezimeIme[i+1];
                        prezimeIme[i+1]=temp;
                    }
                }
            }
        }
        else if (izbor == 6)
        {
            cout << "Kraj rada!!!!!!!" << endl;
            break;
        }
    }
}




