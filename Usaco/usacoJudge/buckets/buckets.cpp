#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)
#define input freopen("buckets.in", "r", stdin)
#define output freopen("buckets.out", "w", stdout)
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
    char x;
    int bx, by, lx, ly, rx, ry;
    fori(0, 10)
    {
        forj(0, 10)
        {
            cin >> x;
            if (x == 'B')
            {
                bx = i;
                by = j;
            }
            if (x == 'L')
            {
                lx = i;
                ly = j;
            }
            if (x == 'R')
            {
                rx = i;
                ry = j;
            }
        }
    }
    if (bx == lx && bx == rx && (by > ry && ry > ly || ly > ry && ry > by))
    {
        // cout << "first" << endl;
        if (abs(by - ly) == 1)
            cout << 0 << endl;
        else
            cout << abs(by - ly) + 1 << endl;
    }
    else if (by == ly && by == ry && (bx > rx && rx > lx || lx > rx && rx > bx))
    {
        // cout << "second" << endl;
        if (abs(by - ly) == 1)
            cout << 0 << endl;
        else
            cout << abs(bx - lx) + 1 << endl;
    }
    else
    {
        // cout << "a" << endl;
        cout << abs(bx - lx) + abs(by - ly) - 1 << endl;
    }
}