#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)

using namespace std;

int main()
{
    int n, x, y;
    scanf("%d", &n);
    vector<int>v;
    fori(0,n)
    {
        scanf("%d", &x);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto i: v)
    cout<<i<<" ";
    cout<<endl;
}
