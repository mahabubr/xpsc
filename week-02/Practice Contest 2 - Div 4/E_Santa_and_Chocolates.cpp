// #include<bits/stdc++.h>

// #define ll long long int
// #define dl double
// #define pi pair<int, int>
// #define B_INF LLONG_MAX
// #define  S_INF LLONG_MIN
// #define vi vector<int>
// #define endl '\n'

// using namespace std;

// void solve() {
//     ll n, k;
//     cin >> n >> k;

//     vector<ll> arr(n);

//     for (ll i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<ll> suf(n + 1), pref(n + 2);

//     for (ll i = 1; i <= n; i++) {
//         suf[i] = suf[i - 1] + arr[i - 1];
//     }

//     for (ll i = n; i >= 1; i--) {
//         pref[i] = pref[i + 1] + arr[i - 1];
//     }

//     ll cnt = 0;

//     for (ll i = 1; i < suf.size(); i++) {
//         if (abs(pref[i] - suf[i]) == 0) {
//             // cnt = max(cnt, abs(pref[i] - suf[i]));
//             cnt++;
//         }
//     }

//     if (cnt > 0) {
//         cout << "YES" << endl;
//     }
//     else {
//         cout << "NO" << endl;
//     }

// }

// int main() {

//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }


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
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);

        ll c = 0;

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            c += i;
        }

        if (c < k || c < n) {
            cout << "NO" << endl;
        }
        else {
            if (c % 2 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}