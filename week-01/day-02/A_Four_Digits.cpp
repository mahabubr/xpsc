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

    string s;
    cin >> s;

    if (s.size() == 0) {
        cout << "0000" << endl;
    }
    else if (s.size() == 1) {
        cout << "000" << s << endl;
    }
    else if (s.size() == 2) {
        cout << "00" << s << endl;
    }
    else if (s.size() == 3) {
        cout << "0" << s;
    }
    else {
        cout << s << endl;
    }

    return 0;
}