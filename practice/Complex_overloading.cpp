#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void getdata()
    {
        cout << "\n ENTER REAL AND Imaginary";
        cin >> r >> i;
    }
    void putdata()
    {
        cout << r << "+"<<"i"<< i<<endl;
    }
    complex operator +(complex bb)
    {
        complex cc;
        cc.r = r + bb.r;
        cc.i = i + bb.i;
        return cc;

        
    }
};

int main()
{
    complex aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    

    return 0;
}