#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct Probka {
double t;
double x;
Probka (double t1,double x1)
{
    t=t1;
    x=x1;

}
};


type vector<Probka> dane;
Dane wczytaj (string nazwa.pliku)
{
    Dane tablica;
    ifstream plik(nazwa.pliku);
    string linia;
    while(getline(wyczt,linia))
    {
        cout<<linia<<endl;
        Probka probka1(t,x);
    }
    plik.close();
    return tablica;

}
int main(int argc, char* argv[])
{
    if(argc !=2)
    {
        return -1;

    }
    cout<<argv[1]<<endl;
    Dance dane = wczytaj(argv[1]);

    return 0;
}
