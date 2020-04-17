#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    stack<int> s1, s2;
    fori(0,n)
    {
        cin >> x;
        if (x == 1)
        {
            cin>>y;
            s1.push(y);
        }
        else
        {
            if(s2.empty())
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            if(!s2.empty())
            if(x==3) cout<<s2.top()<<endl;
            else s2.pop();
        }
    }
}
