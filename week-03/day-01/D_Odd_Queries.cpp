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
    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n);

    ll sum = 0;

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    vector<ll> pref(n + 1);

    for (ll i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + arr[i - 1];
    }


    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;

        ll windowSum = (sum - (pref[r] - pref[l - 1]));
        ll otherSum = windowSum + ((r - l + 1) * k);

        if (otherSum % 2 == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}