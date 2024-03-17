#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> v(n);

        ll mn = B_INF;

        for (int i = 0; i < n; i++) {
            cin >> v[i];

            mn = min(mn, v[i]);
        }

        ll ans = 0;

        for (int i = 0; i < n; i++) {
            ans += v[i] - mn;
        }

        cout << ans << endl;

    }


    return 0;
}