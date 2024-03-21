#include<iostream>
#include<iomanip>
using namespace std;

class emplo
{
    public:
    long int employeenumber;
    string employeename;
    double basic;
    float da;
    int it;
    double ns;
    
        
};        
int main()
{
emplo e1;
    cout << "Employee name is : " << endl;
    cin >> e1.employeename;
    cout << "Enployee number is : " << endl;
    cin >> e1.employeenumber;
    cout << "Enployee basic is : " << endl;
    cin >> e1.basic;
    cout << "Employee da is : " << endl;
    cin >> e1.da;
    cout << "Employee it is : " << endl;
    cin >> e1.it;
    cout << "Employee net salary is : " << endl;
    cin >> e1.ns;

    cout << "Employee name is : " << e1.employeename << endl;
    cout << "Employee number is : " << e1.employeenumber << endl;
    cout << "Employee basic is : " << e1.basic << endl;
    cout << "Employee da is : " << e1.da << endl;
    cout << "Employee it is : " << e1.it << endl;
    cout << "Employee net salary is : " << e1.ns << endl;
    
}