#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<string> st;

    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    vector<int> v;

    for (int i = 0; i < n - 1; i++) {
        bool found = false;

        for (int j = i + 1; j < n; j++) {
            string conS = arr[i] + arr[j];
            if (st.find(conS) != st.end()) {
                found = true;
                break;
            }
        }
        if (found) {
            v.push_back(1);
        }
        else {
            v.push_back(0);
        }
    }

    for (int n : v) {
        cout << n << " ";
    }


    cout << endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}