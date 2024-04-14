#include<iostream>
#include<iomanip>
using namespace std;

float area(float a, float pi=3.14)
{
    return pi*a*a;
}
int main()
{
    double sum;
    float r;
    cout << fixed << endl;
    cout << "Enter radius: " << endl;
    cin >> r;
    sum=area(r);
    cout << sum << endl;
    return 0;
}    