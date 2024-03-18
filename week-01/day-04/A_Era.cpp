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
        int n;
        cin >> n;

        int mx = S_INF;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;

            mx = max(mx, x - i);
        }

        cout << mx << endl;
    }

    return 0;
}