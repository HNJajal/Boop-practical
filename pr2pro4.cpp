#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float number[]={2,4,3,6,1,5,10,7,9,8};
    float sum;
    float avg;

    for (int i=0 ; i<10; i++){
    sum=number[i]+sum;
    }
    cout << "sum of array is :" << sum << endl;
    avg=sum/10;
    cout << "avg:" << avg << endl;
    int n=10;
    int temp;
    for(int i=0; i<n-1; ++i)
    {
        for(int j=0; j<n-1; ++j)
        {
            if(number[j]>number[j+1])
            {
            temp=number[j];
            number[j]=number[j+1];
            number[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n; i++)
    {
        cout << number[i] << " ";
        }
        return 0;
}