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
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == i + 1 && arr[i + 1] == i + 2) {
            swap(arr[i], arr[i + 1]);
            ans++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == i + 1) {
            ans++;
        }
    }

    cout << ans << endl;
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