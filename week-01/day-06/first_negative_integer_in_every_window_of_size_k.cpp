//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
    long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int a[],
    long long int n, long long int k) {
    queue<long long> nq;
    vector<long long> v;

    long long l = 0, r = 0, ans = 0;

    while (r < n) {
        if (a[r] < 0) {
            nq.push(a[r]);
        }

        if (r - l + 1 == k) {
            if (nq.empty()) {
                v.push_back(0);
            }
            else {
                v.push_back(nq.front());
            }

            if (!nq.empty() && a[l] < 0) {
                nq.pop();
            }

            l++;
        }

        r++;
    }

    return v;
}
