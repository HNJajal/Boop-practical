#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double kmtom=1000.0;
    double mtocm=100.0;
    double cmtoft=0.32;
    double fttoin=12;
    double km;
    cout << "Enter Kilometer" << endl;
    cin >> km;
    double meter=km*kmtom;
    double cm=meter*mtocm;
    double ft=cm*cmtoft;
    double inch=ft*fttoin;
    cout << fixed << setprecision(2) ;
    cout << "Kilometer in meter :" << setw(10)<< setfill(' ')<< meter<< endl;
    cout << "Kilometer in cm :" << setw(10)<< setfill(' ')<< cm<<endl;
    cout << "Kliometer in ft :" << setw(10)<< setfill(' ')<< ft<<endl;
    cout << "Kilometer in inch :" << setw(10)<< setfill(' ')<< inch<< endl;
    
    
    
    
    
    
    
    return 0;
}