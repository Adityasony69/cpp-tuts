// *******************encapsulation*****************************//

#include <iostream>
using namespace std;
    class hero{

        private:
        string nme;
        int age;
        float height;


        public:
        int getage(){
            return this->age;
        }

        void setage(int a)
        {age=a;}
    };

    int main(){
        hero kukushibo;
        cout<<"the health of kokushibo is:"<<kukushibo.getage()<<endl;
        cout<<"IN the ablove line it shows garbage value because we didnt set the  VALUE "<<endl;
        kukushibo.setage(10);
        cout<<"the health of kokushibo is:"<<kukushibo.getage()<<endl;
    }