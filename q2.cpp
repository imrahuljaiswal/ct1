// Rahul
// 2010990571
// g9

#include <iostream>

using namespace std;

bool findpair(int A[], int size, int x)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (A[i] + A[j] == x)
            {
                cout << "Pair found (" << A[i] << ", " << A[j] << ")" << endl;

                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    int A[] = {8, 7, 2, 5, 3, 1};
    int x = 10;
    int size = sizeof(A) / sizeof(A[0]);

    if (findpair(A, size, x))
    {
    }
    else
    {
        cout << "Pair not found" << endl;
    }

    return 0;
}