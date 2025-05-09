#include <iostream>
using namespace std;

int main()
{
    char A[4] = {'a', 'c', 'd', 'b'};
    char B[6] = {'b', 'g', 'h', 'i', 'a', 'z'};
    int RepeatA[4] = {0};
    int RepeatB[6] = {0};

    // Calculate RepeatA
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (A[i] == B[j])
                RepeatA[i]++;
        }
    }

    // Calculate RepeatB
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (B[i] == A[j])
                RepeatB[i]++;
        }
    }

    cout << "( A U B ) = ";
    for (int i = 0; i < 4; i++)
        cout << A[i] << " ";
    for (int i = 0; i < 6; i++)
        if (RepeatB[i] == 0)
            cout << B[i] << " ";

    cout << "\n( A - B ) = ";
    for (int i = 0; i < 4; i++)
        if (RepeatA[i] == 1)
            cout << A[i] << " ";

    cout << "\n( B - A ) = ";
    for (int i = 0; i < 6; i++)
        if (RepeatB[i] == 1)
            cout << B[i] << " ";

    cout << endl;
    return 0;
}
