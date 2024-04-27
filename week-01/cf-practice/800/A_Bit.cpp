#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

int x = 0;

void solve() {
    string s;
    cin >> s;

    if (s == "X++" || s == "++X") {
        x++;
    }
    else {
        x--;
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

    cout << x << endl;


    return 0;
}