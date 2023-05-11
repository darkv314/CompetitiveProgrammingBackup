#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)
#define input freopen("promote.in", "r", stdin)
#define output freopen("promote.out", "w", stdout)
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
    long long x, y, num[4] = {0, 0, 0, 0};
    cin >> x >> y;
    fori(0, 3)
    {
        cin >> x >> y;
        if (y > x)
        {
            forj(0, i + 1)
            {
                num[j] += y - x;
            }
        }
        else if (x > y)
        {
            forj(0, i + 1)
            {
                num[j] -= x - y;
            }
            // num[i] -= x - y;
        }
    }
    fori(0, 3)
    {
        cout << num[i] << endl;
    }
}