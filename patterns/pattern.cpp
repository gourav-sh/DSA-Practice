#include <iostream>
using namespace std;

// ============================================================
// Pattern: 0-1 Triangle
//
// Output for n = 5:
//
// 1
// 01
// 101
// 0101
// 10101
// ============================================================


// ------------------------------------------------------------
// Approach 1: Using start variable
// Idea:
// Start each row with either 1 or 0 depending on the row.
// Then toggle the value using: start = 1 - start.
// ------------------------------------------------------------

void printApproach1(int n)
{
    for(int i = 0; i < n; i++)
    {
        int start;

        if(i % 2 == 0)
            start = 1;
        else
            start = 0;

        for(int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}


// ------------------------------------------------------------
// Approach 2: Using row and column parity
// Idea:
// If i and j have different parity -> print 0
// Otherwise -> print 1
// ------------------------------------------------------------

void printApproach2(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if((i % 2 == 0 && j % 2 != 0) ||
               (i % 2 != 0 && j % 2 == 0))
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }

        cout << endl;
    }
}


int main()
{
    int n;
    cin >> n;

    cout << "Approach 1:" << endl;
    printApproach1(n);

    cout << endl;

    cout << "Approach 2:" << endl;
    printApproach2(n);

    return 0;
}