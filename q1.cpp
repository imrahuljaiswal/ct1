// Rahul
// 2010990571
// g9

#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{

    int ar1[n];

    int s = 0, l = n - 1;

    int condition = true;

    for (int i = 0; i < n; i++)
    {
        if (condition)
            ar1[i] = arr[l--];
        else
            ar1[i] = arr[s++];

        condition = !condition;
    }

    for (int i = 0; i < n; i++)
        arr[i] = ar1[i];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Input array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    rearrange(arr, n);

    cout << "\nRearranged array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}