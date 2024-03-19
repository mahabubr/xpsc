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
        ll a, b, c;
        cin >> a >> b >> c;

        ll tents = 0;

        tents += a;

        tents += b / 3;
        b %= 3;

        if (b > 0) {
            if (abs(b - 3) <= c) {
                tents++;
                c -= abs(b - 3);
            }
            else {
                cout << "-1" << endl;
                continue;
            }
        }


        tents += c / 3;
        c %= 3;

        if (c > 0) {
            tents++;
        }

        cout << tents << endl;
    }

    return 0;
}