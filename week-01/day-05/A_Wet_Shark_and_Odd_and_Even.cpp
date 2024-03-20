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

    ll n;
    cin >> n;

    vector<ll> v(n);

    ll sum = 0;

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }


    if (sum % 2 == 0) {
        cout << sum << endl;
    }
    else {
        ll mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 1) {
                mn = min(mn, v[i]);
            }
        }

        cout << sum - mn << endl;
    }

    return 0;
}