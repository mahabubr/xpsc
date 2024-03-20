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

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> arr(n);

        ll mx = S_INF;
        ll mxVal = 0;

        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > mx) {
                mx = arr[i];
                mxVal = i;
            }
        }

        ll sum = 0;

        for (ll i = 0; i < n; i++) {
            if (i == mxVal) {
                sum += arr[i] + arr[i];
                break;
            }
            sum += arr[i];
        }

        cout << sum << endl;


    }

    return 0;
}