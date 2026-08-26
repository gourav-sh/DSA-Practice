#include<iostream>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    if(n<2)
    {
        return -1;
    }

    int largest = arr[0];
    int second_largest = INT_MIN;

    for(int i=1;i<n;i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }

        return second_largest;
    }
}