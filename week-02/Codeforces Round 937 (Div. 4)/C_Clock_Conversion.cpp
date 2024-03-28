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
    string s;
    cin >> s;

    string hh = s.substr(0, 2);
    string mm = s.substr(3, 4);

    string chh = "12";

    if (hh >= chh) {
        int lhh = stoi(hh) - 12;

        if (lhh == 0) {
            cout << "12" << ":" << mm << " PM" << endl;
        }
        else {
            if (abs(lhh) < 10) {
                cout << "0" << lhh << ":" << mm << " PM" << endl;
            }
            else {
                cout << lhh << ":" << mm << " PM" << endl;
            }
        }
    }
    else {
        string cz = "00";
        if (hh == cz) {
            cout << "12" << ":" << mm << " AM" << endl;
        }
        else {
            cout << hh << ":" << mm << " AM" << endl;
        }
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