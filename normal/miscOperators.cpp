#include <iostream>
using namespace std;
int main()
{
    int a=4;
    cout<<sizeof(a)<<endl;
    
    char name='a';
    cout<<sizeof(a)<<endl;

    bool flag;
    a==name? flag= true : flag= false;
    cout<<flag<<endl;

    cout<<&a<<endl;

    int c=6;
    cout<<(c++)<<endl;
    cout<<(++c)<<endl;
    int d=7;
    cout<<(d--)<<endl;
    cout<<(--d)<<endl;
    return 0;
}

