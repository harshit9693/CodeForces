#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{

    ll t; // Number of test cases
    cin >> t;
    while (t--)
    {
        ll n; // Number of additional buildings
        cin >> n;

        // Vector to store the frequency    of visits and their indices
        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            ll freq; // Frequency of visits for the i-th building
            cin >> freq;
            v[i] = {freq, i + 1}; // Store frequency and 1-based index
        }

        // Sort the vector in descending order of frequency
        sort(v.rbegin(), v.rend());

        ll totalCost = 0;               // Total walking time
        vector<ll> positions(n + 1, 0); // Array to store building positions

        // Assign coordinates to buildings
        for (ll i = 0; i < n; i++)
        {
            ll freq = v[i].first;    // Frequency of visits for the current building
            ll idx = v[i].second;    // Original index of the building
            ll distance = i / 2 + 1; // Distance from the origin (0-th building)

            // Calculate the total walking time
            totalCost += 2 * freq * distance;

            // Alternate placement of buildings on the left and right of the origin
            if (i % 2 == 0)
            {
                positions[idx] = distance;
            }
            else
            {
                positions[idx] = -distance;
            }
        }

        // Output the total walking time
        cout << totalCost << endl;

        // Output the positions of all buildings
        for (ll i = 0; i <= n; i++)
        {
            cout << positions[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
