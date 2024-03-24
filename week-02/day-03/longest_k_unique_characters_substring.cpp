//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestKSubstr(string s, int k) {
        // your code here

        map<int, int> mp;
        int l = 0, r = 0, ans = -1, sum = 0;

        while (r < s.size()) {
            mp[s[r] - 'a']++;

            while (mp.size() > k) {
                mp[s[l] - 'a']--;
                if (mp[s[l] - 'a'] == 0) {
                    mp.erase(s[l] - 'a');
                }
                l++;
            }

            if (mp.size() == k) {
                ans = max(ans, r - l + 1);
            }

            r++;
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends