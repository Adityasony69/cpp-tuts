#include <iostream>
using namespace std;

void swap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int even[8] = {2, 44, 56, 678, 78, 34, 78, 9};
    int odd[5] = {3, 55, 69, 23, 4};

    swap(even, 8);
    print(even, 8);
    cout << endl;
    return 0;
}
