#include <iostream>
using namespace std;
int main()
{
    int a,c;
    cout<<"enter a number to revrse";
    cin>>a;

    cout<<"the number is:"<<c;
    return 0;
}
int reversing(int a)
{
    int rem,rev=0;
    while(a!=0)
    {
        rem=0%10;
        rev=rev*10+rem;
        a=a/10;
    } 
    return rev;

}