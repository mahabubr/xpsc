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

    ll n, s;
    cin >> n >> s;

    ll arr[n];

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    multiset<ll> ml;

    ll l = 0, r = 0, ans = 0;

    while (r < n) {
        ml.insert(arr[r]);

        ll mn = *ml.begin(), mx = *ml.rbegin();

        if (mx - mn <= s) {
            ans += r - l + 1;
        }
        else {
            while (l < r) {
                ll mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= s) {
                    break;
                }
                auto it = ml.find(arr[l]);
                ml.erase(it);
                l++;
            }
            ll mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= s) {
                ans += r - l + 1;
            }
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}

// 4 5 7