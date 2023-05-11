#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
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

class Solution
{
public:
    vi solution(int n, vi A)
    {
        vi a(n, 0);
        int mayor = 0;
        int mayorActual = 0;
        fori(0, A.size())
        {
            if (A[i] <= n)
            {
                if (a[A[i] - 1] < mayorActual)
                {
                    a[A[i] - 1] = mayorActual + 1;
                }
                else
                {
                    a[A[i] - 1]++;
                }
                mayor = max(mayor, a[A[i] - 1]);
            }
            else
            {
                mayorActual = mayor;
            }
        }
        fori(0, n)
        {
            if (a[i] < mayorActual)
            {
                a[i] = mayorActual;
            }
        }
        return a;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vi A(m, 0);
    fori(0, m)
    {
        cin >> A[i];
    }
    Solution solution;
    vi B = solution.solution(n, A);
    fori(0, B.size())
    {
        cout << B[i] << " ";
    }
}