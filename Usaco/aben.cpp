#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)
#define input freopen("aben.in", "r", stdin)
#define output freopen("aben.out", "w", stdout)
#define pb push_back
#define mk make_pair
#define ll long long
#define INF 1000000000

using namespace std;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    input;
    output;
    string s, ne, m;
    int n, p;
    cin >> n;
    char lol = 34;
    vector<string> names;
    cin.ignore();
    m = "{nombre:";
    fori(0, n)
    {
        getline(cin, s);
        ne = m + '"' + s + '"' + ",";
        // cout << m << '"' << s << '"' << ",";
        names.pb(ne);
    }
    fori(0, n)
    {
        cin >> p;
        // names[i] += "price: " + to_string(p) + "}";
        cout << names[i] << "precio: " << p << +"}," << endl;
    }
}