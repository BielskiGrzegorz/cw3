#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct Probka {
double t;
double x;
};


int main()
{
    string linia;
    ifstream wyczt("sygnal.csv");
    while(getline(wyczt,linia))
    {
        cout<<linia<<endl;\
        double x,t;
        stringstream ss(linia);
        ss>>t;
        ss.ignore();
        ss>>x;
    }

    /*
    Probka probka1 = { 0.1, 0.2 };
    vector<Probka> dane;

    Probka probka1(0.1, 0.2);
    dane.push_back(probka1);
    dane.push_back(Probka(0.2, 0.3));
    cout << dane[0].first << ”, ” << dane[0].second;

    */
    wyczt.close();

    return 0;
}
