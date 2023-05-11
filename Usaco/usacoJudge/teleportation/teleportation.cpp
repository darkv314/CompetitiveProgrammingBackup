#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)
#define input freopen("teleport.in", "r", stdin)
#define output freopen("teleport.out", "w", stdout)
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

int notp(int a, int b, int c, int d)
{
    return (abs(a - b));
}

int tp(int a, int b, int c, int d)
{
    int m = min(abs(a - d), abs(a - c));
    int m1 = abs(a - d) == m ? c : d;
    return m + abs(m1 - b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    input;
    output;
    int a, b, c, d, m1;
    cin >> a >> b >> c >> d;
    cout << min(notp(a, b, c, d), tp(a, b, c, d)) << "\n";
}