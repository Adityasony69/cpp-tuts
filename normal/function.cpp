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
    int a;
    int b;
     cout<<"enter the value of a";
      cin>>a;
      cout<<"enter the value of b";
    cin>>b;
        float c;
        float d;
     cout<<"enter the value of c";
      cin>>c;
      cout<<"enter the value of d";
    cin>>d;

    cout<<"the value of a is="<<a<<endl;
    cout<<"the value of b is="<<b<<endl;
    cout<<"the sum of a and b is="<<add(a,b)<<endl;
    cout<<"the sum of a and b is="<<add(c,d)<<endl;

}
