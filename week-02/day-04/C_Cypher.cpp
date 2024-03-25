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

    vector<int>arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        string s;
        cin >> s;

        for (int j = 0; j < a; j++) {
            if (s[j] == 'U') {
                arr[i]--;
            }
            else if (s[j] == 'D') {
                arr[i]++;
            }

            if (arr[i] > 9) {
                arr[i] = 0;
            }
            if (arr[i] < 0) {
                arr[i] = 9;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
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