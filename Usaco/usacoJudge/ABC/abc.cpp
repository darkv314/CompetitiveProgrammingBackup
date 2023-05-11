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
    // input;
    // output;
    long long num[10];
    fori(0, 7)
    {
        cin >> num[i];
    }
    sort(num, num + 7);
    // fori(0, 7)
    // {
    //     cout << num[i] << " ";
    // }
    if (num[0] + num[1] <= num[2])
        cout << num[0] << " " << num[1] << " " << num[3] << "\n";

    else
        cout << num[0] << " " << num[1] << " " << num[2] << "\n";
}