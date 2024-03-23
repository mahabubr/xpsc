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
    ll n;
    cin >> n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll pref = 0;
    ll ans = S_INF;

    for (ll i = 0; i < n; i++) {
        ll mx = pref + 2 * arr[i];
        ans = max(ans, mx);
        pref += arr[i];
        // cout << pref + 2 * arr[i] << " ";
    }

    // ll pref[n + 1] = { 0 };

    // for (int i = 1; i <= n; i++) {
    //     pref[i] = pref[i - 1] + arr[i - 1];
    // }

    // ll mx = S_INF;

    // for (int i = 0; i <= n; i++) {
    //     mx = max(mx, pref[i] + 2 * arr[i]);
    // }


    cout << ans << endl;
    // cout << mx << endl;
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