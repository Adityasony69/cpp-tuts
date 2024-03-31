#include <iostream>
using namespace std;
class bill
{
    int item_code[30];
    float item_price[30];
    int size;
    float amount;

public:
    void getdata(int a);
    void total_bill();
};
void bill ::getdata(int a,float b)

    amount = 0;
size = a;
cout << "enter the item code for" << a << "items" << end;
for (int i = 0, i < size; i++)
{
    cin >> item_code[i];
}
cout << "enter the price for" << a << "items" << endl;
for (int j = 0; j < size; j++)
{
    cin >> item_price[j];
    amount = amount + item_price[i];
}
void bill::total_bill();
cout << "\t\t***XYZ BAKERS***\t\t";
cout << "item code\t\t item price" << endl;
for (int i = 0; i < size; i++)
{
    out << item_code[i] << "\t" << item_price[i] << endl;
}
int main()
{
    bill p;
    p.getdata(2);
    p.total_bill();
    return 0;
}
