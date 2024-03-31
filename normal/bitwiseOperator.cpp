#include <iostream>
using namespace std;
int main()
{
    int num1=6;
    cout<<(num1<<1)<<endl; //12
    cout<<(num1>>1)<<endl; //3
  
    int num2=12;
    cout<<(num1|num2)<<endl;
    cout<<(num1&num2)<<endl;
    cout<<(num1^num2)<<endl;
    return 0;
}