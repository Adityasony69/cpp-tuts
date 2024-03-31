#include <iostream>
using namespace std;

int findUnique(int arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
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
    int arr[7] = {1, 3, 2, 6, 3, 2, 1};
    findUnique(arr, 7);
    print(arr, 7);
    return 0;
}