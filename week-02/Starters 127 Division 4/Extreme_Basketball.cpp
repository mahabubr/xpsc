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
    int a, b;
    cin >> a >> b;

    int needScore = a - b;


    if (needScore >= 10) {
        cout << 0 << endl;
    }
    else {
        cout << (10 - needScore + 2) / 3 << endl;
    }

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