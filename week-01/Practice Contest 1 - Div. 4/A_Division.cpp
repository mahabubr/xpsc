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

        if (n <= 1399) {
            cout << "Division 4" << endl;
        }
        else if (n >= 1400 && n <= 1599) {
            cout << "Division 3" << endl;
        }
        else if (n >= 1600 && n <= 1899) {
            cout << "Division 2" << endl;
        }
        else if (n >= 1900) {
            cout << "Division 1" << endl;
        }
    }

    return 0;
}