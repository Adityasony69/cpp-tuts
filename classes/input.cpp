#include <iostream>
using namespace std;
 class person
 {
    int age;
    string name;
    string address;

    public:

    void input()
    {
        cout<<"enter age:"<<endl;
        cin>>age;

        cout<<"enter Name"<<endl;
        cin>>name;

        cout<<"Enter Address"<<endl;
        cin>>address;

    }
        void print()
        {
            cout<<"Age is:"<<age<<endl;
            cout<<"Name is:"<<name<<endl;
            cout<<"Address is:"<<address<<endl;
        }
    
 };
 main()
 {
    person Aditya,Adi,Adds;
    Aditya.input();
    Aditya.print();

    Adi.input();
    Adi.print();

    Adds.input();
    Adds.print();
 }