#include<iostream>
using namespace std;
struct collageinfo
{
    string name;
    int code;
    string department;
    int intake;
    };
    
    int main()
    {
        collageinfo d1={"GP Junagadh",619,"Computer Engineer",70};
        
        cout << "Collage name: " << d1.name << endl;
        cout << "Collage code: " << d1.code << endl;
        cout << "Department: " << d1.department << endl;
        cout << "Intake: " << d1.intake;
        
        return 0;
    }   