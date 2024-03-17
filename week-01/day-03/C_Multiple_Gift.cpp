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

    ll x, y;
    cin >> x >> y;

    ll cnt = 0;

    for (ll i = x; i <= y; i = i * 2) {
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}