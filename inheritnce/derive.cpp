#include <iostream>
using namespace std;

// Base class
class Base {
public: // Public members
    int publicVar;

protected: // Protected members
    int protectedVar;

private: // Private members
    int privateVar;

public:
    Base() {
        publicVar = 1;
        protectedVar = 2;
        privateVar = 3;
    }

    void display() {
        cout << "Public Var: " << publicVar << endl;
        cout << "Protected Var: " << protectedVar << endl;
        cout << "Private Var: " << privateVar << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void accessBaseMembers() {
        // Accessing publicVar from Base class
        cout << "Accessing publicVar from Base class: " << publicVar << endl;

        // Accessing protectedVar from Base class
        cout << "Accessing protectedVar from Base class: " << protectedVar << endl;

        // privateVar is not accessible here as it's private to Base class
    }
};

int main() {
    Base obj;
    obj.display(); // Displaying all members of Base class

    Derived derivedObj;
    derivedObj.accessBaseMembers(); // Accessing Base class members from Derived class

    return 0;
}
