//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution {
public:
    int search(string pat, string txt) {
        // code here
        vector<int> frq1(26);
        vector<int> frq2(26);

        for (char c : pat) {
            frq1[c - 'a']++;
        }

        int l = 0, r = 0;
        int ans = 0;

        while (r < txt.size()) {
            int val = txt[r] - 'a';
            frq2[val]++;
            if (r - l + 1 == pat.size()) {
                if (frq1 == frq2) {
                    ans++;
                }
                frq2[txt[l] - 'a'] -= 1;
                l++;
                r++;
            }
            else {
                r++;
            }
        }

        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends