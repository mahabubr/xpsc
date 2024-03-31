#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int mx = INT_MIN, sum;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            sum = 0;

            int ci = i, cj = j;
            while (ci < n && cj < m) {
                sum += arr[ci][cj];
                ci++;
                cj++;
            }

            ci = i, cj = j;
            while (ci >= 0 && cj >= 0) {
                sum += arr[ci][cj];
                ci--;
                cj--;
            }

            ci = i, cj = j;
            while (ci < n && cj >= 0) {
                sum += arr[ci][cj];
                ci++;
                cj--;
            }

            ci = i, cj = j;
            while (ci >= 0 && cj < m) {
                sum += arr[ci][cj];
                ci--;
                cj++;
            }

            sum -= arr[i][j] * 3;

            mx = max(mx, sum);

        }
    }

    cout << mx << endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}