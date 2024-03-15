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

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int l = 0, r = 0;
    ll ans = 0;

    while (l < n && r < m) {
        int cntA = 0, cntB = 0, cur = a[l];
        while (a[l] == cur && l < n) {
            cntA++;
            l++;

        }

        while (b[r]< cur && r < m) {
            r++;
        }

        while (b[r] == cur && r < m) {
            cntB++;
            r++;
        }

        ans += (1LL * cntA * cntB);

    }

    cout << ans << endl;

    return 0;
}