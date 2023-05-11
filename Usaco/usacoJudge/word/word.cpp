#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)
#define input freopen("word.in", "r", stdin)
#define output freopen("word.out", "w", stdout)
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
    long long n, k;
    cin >> n >> k;
    long long count = k;
    vector<string> essay;
    string s;
    fori(0, n)
    {
        cin >> s;
        if (s.length() <= count)
        {
            essay.pb(s);
            count -= s.length();
        }
        else
        {
            fori(0, essay.size())
            {
                cout << essay[i];
                if (i != essay.size() - 1)
                    cout << " ";
                else
                    cout << endl;
            }
            essay.clear();
            essay.pb(s);
            count = k - s.length();
        }
    }
    if (essay.size() > 0)
    {
        fori(0, essay.size())
        {
            cout << essay[i];
            if (i != essay.size() - 1)
                cout << " ";
            else
                cout << endl;
        }
    }
}