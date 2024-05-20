#include<bits/stdc++.h>

#define __404__()              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long int ll;
typedef unsigned long int ull;
typedef double ld;
typedef long double lld;

#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define mi map<int, int>
#define mii map<ll,ll>
#define umi unordered_map<int, int>
#define pr pair<int, int>
#define pri pair<ll,ll>

#define rep(i, s, e) for (int i = (s); i <= (e); i++)
#define per(i, s, e) for (int i = (s); i >= (e); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)((x).size()))

#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define neg cout<<"-1"<<endl
#define el cout<<endl;
#define ell cout<<endl<<endl;

#define b_inf LLONG_MAX
#define s_inf LLONG_MIN

const ld pi = 3.141592653589793238;
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 9;

using namespace std;


class Student {
public:
    int roll;
    string name;
    int room;
    string gender;

    Student(int roll, string name, int room, string gender) {
        this->roll = roll;
        this->name = name;
        this->room = room;
        this->gender = gender;
    }
};

void InFiNiTe() {
    int n, k;
    cin >> n >> k;

    vector<Student> students;

    for (int i = 0; i < k; ++i) {
        int roll, room;
        string name, gender;
        cin >> roll >> name >> room >> gender;
        students.push_back(Student(roll, name, room, gender));
    }

    int q;
    cin >> q;

    int cq = 1;

    while (q--) {
        int x;
        cin >> x;

        vector<Student> room;

        for (auto student : students) {
            if (student.room == x) {
                room.push_back(student);
            }
        }

        cout << "Query #" << cq << ":" << endl;
        cq++;

        if (room.empty()) {
            cout << "No Student" << endl;
        }
        else {
            sort(room.begin(), room.end(), [](const Student& a, const Student& b) {
                return a.roll < b.roll;
                });

            for (auto student : room) {
                cout << student.roll << " " << student.name << " " << student.gender << endl;
            }
        }
    }

}


int main() {

    __404__();

    int t = 1;
    cin >> t;

    int c = 1;

    while (t--) {
        cout << "Case #" << c << ":\n";
        InFiNiTe();
        c++;
    }

    return 0;
}