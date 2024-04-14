#include<iostream>
#include<iomanip>
using namespace std;

class convert
{
    public:
    double cm;
    
    double centi()
    {
        fixed:
        return cm*0.01;
    }
    double cc()
    {
        fixed:
        return cm*0.00001;
    }
    double cmm()
    {
        fixed:
        return cm*0.032;
    }
    double cmmm()
    {
        fixed:
        return cm*0.393;
    }
};
    
    
    int main()
    {
        convert c1;
        cout << "Enter value in centimetre :" << endl;
        cin >> c1.cm;
        
        fixed :
        
        cout << "The value of centimetre into meter is : " << c1.centi() << endl;
        cout << "The value of centimetre into kilometre is : " << c1.cc() << endl;
        cout << "The value of centimetre into feet is : " << c1.cmm() << endl;
        cout << "The value of centimetre into inch is : " << c1.cmmm() << endl;          
        return 0;
    }     