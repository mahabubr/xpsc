#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define P_INF LLONG_MAX
#define  N_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }

    ll  l = 0, r = 0, ans = N_INF;

    while (l < n && r < m) {
        if (a[l] <= b[r]) {
            ans = max(ans, a[l]);
            l++;
        }
        else {
            ans = max(ans, b[r]);
            r++;
        }

        cout << ans << " ";
    }

    if (l < n) {
        while (l < n) {
            cout << a[l] << " ";
            l++;
        }
    }

    if (r < m) {
        while (r < m) {
            cout << b[r] << " ";
            r++;
        }
    }


    return 0;
}