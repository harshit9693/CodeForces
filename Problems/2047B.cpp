#include <iostream>
#include <string>
using namespace std;

int main() {
    const int B = 26; 
    long t; 
    cin >> t;
    
    while (t--) {
        long n; 
        cin >> n; 
        string s; 
        cin >> s; 

        long v[B] = {0}; 
        
        // Step 1: Count the frequency of each character
        for (long p = 0; p < s.size(); p++) {
            ++v[s[p] - 'a'];
        }

        long mn = s.size(), mx = 0; // Initialize min and max frequencies
        char mnc = ' ', mxc = ' '; // Characters with min and max frequencies
        
        // Step 2: Find the character with minimum and maximum frequency
        for (long p = 0; p < B; p++) {
            if (!v[p]) { continue; } // Skip characters not in the string
            
            if (v[p] < mn) {
                mn = v[p];
                mnc = ('a' + p); // Update min frequency character
            }
            
            if (v[p] >= mx) {
                mx = v[p];
                mxc = ('a' + p); // Update max frequency character
            }
        }

        // Step 3: Replace the first occurrence of the min frequency character
        for (long p = 0; p < s.size(); p++) {
            if (s[p] == mnc) {
                s[p] = mxc; 
                break; // Only replace the first occurrence
            }
        }

        // Step 4: Output the modified string
        cout << s << std::endl;
    }

    return 0;
}

