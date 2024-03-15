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

    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << max(a, b) + max(a, b);
    }
    else {
        int mx = max(a, b);
        cout << mx + mx - 1 << endl;
    }

    return 0;
}