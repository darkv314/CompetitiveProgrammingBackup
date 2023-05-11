#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define pb push_back
#define INF 1000000000

int main()
{
    // input;
    // output;
    string x;
    int a = 0;
    while (getline(cin, x))
    {
        fori(0, x.size())
        {
            if (x[i] == '"')
            {
                if (a == 0)
                {
                    a = 1;
                    cout << "``";
                }
                else
                {
                    a = 0;
                    cout << "''";
                }
            }
            else
            cout<<x[i];
        }
        cout<<endl;
    }
}