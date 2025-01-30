#include <bits/stdc++.h>
using namespace std;

int countPairSum(int arr[], int L,
                 int R, int N)
{
    // Sort the given array
    sort(arr, arr + N);

    int right = N - 1, count = 0;

    // Iterate until right > 0
    while (right > 0)
    {

        // Starting index of element
        // whose sum with arr[right] >= L
        auto it1 = lower_bound(arr, arr + N,
                               L - arr[right]);

        int start = it1 - arr;

        // Ending index of element
        // whose sum with arr[right] <= R
        auto it2 = upper_bound(arr, arr + N,
                               R - arr[right]);

        --it2;

        int end = it2 - arr;

        // Update the value of end
        end = min(end, right - 1);

        // Add the count of elements
        // to the variable count
        if (end - start >= 0)
        {
            count += (end - start + 1);
        }

        right--;
    }

    // Return the value of count
    return count;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        long long totalCount = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        cout << countPairSum(arr, sum - y, sum - x, n) << endl;
    }
    return 0;
}
