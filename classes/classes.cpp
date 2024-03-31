#include <iostream>
using namespace std;

class Protagonist
{
    // properties
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }
    // getter

    int gethelth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    // setter
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    // creating Girl as Object
    Protagonist Girl;
    // using setter to set health because we are using private members.
    cout << "Girl's Health is:" << Girl.gethelth() << endl;
    Girl.sethealth(70);
    Girl.level = 'A';
    
    cout << "Health is:" << Girl.gethelth() << endl;
    cout << "Level is:" << Girl.level << endl;

    return 0;
}
