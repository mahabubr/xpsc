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
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n + 1), b(n + 1);

    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (ll i = 1; i <= n; i++) {
        cin >> b[i];
    }

    ll ans = 0;

    for (ll i = n; i > m; i--) {
        ans += min(a[i], b[i]);
    }

    vector<long long> pref(m + 1);
    for (ll i = 1;i <= m;i++) {
        pref[i] = pref[i - 1] + b[i];
    }

    ll mn = B_INF;

    for (ll i = 1; i <= m; i++) {
        mn = min(mn, a[i] + (pref[m] - pref[i]));
    }

    ans += mn;

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