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

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        mp[x]++;
    }

    int mx = INT_MIN;

    for (auto& [a, b] : mp) {
        mx = max(mx, b);
    }

    int ans = 0;

    while (mx < n) {
        ans += 1 + min(n - mx, mx);
        mx += min(n - mx, mx);
    }

    cout << ans << endl;


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