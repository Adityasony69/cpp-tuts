#include <iostream>
using namespace std;

class human
{

protected:
    int height;
    public:
    int weight;
    int age;

public:
    int getage()
    {
        return this->age;
    }
    int setweight(int w)
    {
        this->weight = w;
    }
};

class male : public human{   //inheritence  applied
    public:
    string color;
    

    void sleep(){
        cout<<"male sleeps"<<endl;
    }
};

int main()
{
    male obj;
    cout<<obj.age<<endl;
    cout<<obj.height<<endl;
    cout<<obj.weight<<endl;
    cout<<obj.color<<endl;
    obj.sleep();
    obj.setweight(84);
    cout<<obj.weight<<endl;
}
