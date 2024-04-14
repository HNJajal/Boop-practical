#include<iostream>
using namespace std;

inline float multiply(float a, float b)
{
    return a * b;
}

int main()
{
    float num1, num2;
    std::cout << "Enter teh value of 'a' nad 'b' : ";
    std::cin >> num1 >> num2;
    std::cout << "a*b = " << multiply(num1, num2) << std::endl;
    return 0;
}