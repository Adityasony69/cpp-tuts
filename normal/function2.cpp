#include <iostream>
using namespace std;
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
int add(int num1,int num2,int num3)
{
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1,float num2)
{
    float sum=num1+num2;
    return sum;
}
int main()
{
    int a=5;
    int b=4;
    int c=4;
    float d=4.5;
    float e=3.9;
    cout<<"the sum of a and b and c is"<<add(a,b,c)<<endl;
    cout<<"the sum of d and e is :"<<add(d,e)<<endl;
}