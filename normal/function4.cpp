#include <iostream>
using namespace std;
void maketwice(int&p)
{
    int &q=p;
    q=q-100;
}
 int main()
 {
    int p=870;
    maketwice(p);
    cout<<p;
 }