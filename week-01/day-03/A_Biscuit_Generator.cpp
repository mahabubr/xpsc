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

    int a, b, t;
    cin >> a >> b >> t;

    int ans = 0;

    int biscuit = a;

    while (biscuit <= t + 0.5) {
        ans += b;
        biscuit += a;
    }

    cout << ans << endl;

    return 0;
}