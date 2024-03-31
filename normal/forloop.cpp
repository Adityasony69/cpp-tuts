#include <iostream>
using namespace std;
int main()
{
    int j;
    cin>>j;

    int sum=0;
    for(int i=1;i<=j;i++){
        sum+=i;
    }
    cout<<sum;

    return 0;
}