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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, count = 0;
    cin >> n;
    fori(0, n)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            count++;
    }
    cout << count << "\n";
}