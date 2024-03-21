#include <iostream>
using namespace std;

class Student {
public:
    string name;
        int age,a,b,sum,avg;
        void hello() {
            cout << "Name :" << name << endl;
            cout << "Enter your age: ";
            cin >> age;
            if(age<18)
            {
                cout << "Miner" << endl;
            }
            else
            {
                cout << "Major" << endl;   
            }
        cout << "Enter value of A B " << endl;     
        cin >> a >> b;
        sum=a+b;
        cout << "Sum of A+B =" << sum << endl;
        avg=sum/2;
        cout << "average of A and B=" << avg << endl;
    }
    
};

int main() 
{
int age;
    Student S;    // create object
    S.name="Lucifer";
    S.age = age;
    S.hello();
    return 0;
}