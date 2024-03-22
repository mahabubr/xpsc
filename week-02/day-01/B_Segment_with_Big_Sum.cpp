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

    ll l = 0, r = 0, ans = B_INF, sum = 0;

    while (r < n) {
        sum += arr[r];

        if (sum <= s) {
            ans = min(ans, r - l + 1);
        }
        else {
            sum -= arr[l];
            l++;
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}