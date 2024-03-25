#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

int get_cost(string a, string b, int m) {

    int val = 0;

    for (int i = 0; i < m; i++) {
        val += abs((a[i] - 'a') - (b[i] - 'a'));
    }

    return val;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mn = INT_MAX;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            mn = min(mn, get_cost(arr[i], arr[j], m));
        }
    }

    cout << mn << endl;
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