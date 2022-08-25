// array must be sorted for this approach.
#include <iostream>
using namespace std;
bool pairsum(int arr[], int n, int k)
{
    int high = n - 1;
    int low = 0;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high;
            return true;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pairsum(arr, n, k);
}