#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)
#define input freopen("paint.in", "r", stdin)
#define output freopen("paint.out", "w", stdout)
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
    int a, b, c, d, m1 = 0, m2 = 101, m3 = 0, m4 = 101, m5 = 0, m6 = 101;

    cin >> a >> b >> c >> d;
    m1 = max(a, b);
    m2 = min(a, b);
    m3 = max(c, d);
    m4 = min(c, d);
    m5 = max({a, b, c, d});
    m6 = min({a, b, c, d});
    if (m1 < m4 || m3 < m2)
    {
        cout << m1 - m2 + m3 - m4 << "\n";
    }
    else
        cout << m5 - m6 << "\n";
}