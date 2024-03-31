#include <iostream>
using namespace std;
int main()
{
    int Age;
    cout << "enter a number";
    cin >> Age;
    if (Age < 12)
    {
        cout << "That person is a Child" << endl;
    }
    else if (Age > 18)
    {
        cout << "That person is an Adult";
    }
    else
    {
        cout << "That person is a Teenager";
    }

    return 0;
}