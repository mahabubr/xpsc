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


vector<long long> printFirstNegativeInteger(long long int A[],
    long long int N, long long int K) {
    vector<long long int> v;
    queue<long long int> q, nq;

    long long int l = 0, r = 0;

    while (r < N) {
        q.push(A[r]);
        if (A[r] < 0) {
            nq.push(A[r]);
        }

        if (r - l + 1 == K) {
            if (!nq.empty()) {
                v.push_back(nq.front());
            }
            else {
                v.push_back(0);
            }

            if (q.front() == nq.front()) {
                nq.pop();
                q.pop();
            }
            else {
                q.pop();
            }

            l++;
            r++;
        }
        else {
            r++;
        }
    }

    return v;
}