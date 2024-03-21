#include<iostream>
using namespace std;
float sum(float r)
{
    return 3.14*r*r;
}
int main()
{
    float a;
    float total;
    cout << "Enter two values: " ;
    cin >> a;
    total=sum(a);
    cout << total;
    return 0;
}