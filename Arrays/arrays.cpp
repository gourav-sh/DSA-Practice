pair<int, int> LargestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    int index = 0;

    for(int i = 1;i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
            index = i;
        }
    }
    return {largest, index};
}