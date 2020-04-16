#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)

using namespace std;

int main()
{
    int n,x,y,may=0;
    cin>>n;
    stack<int>st,mx;
    while(n--)
    {
        cin>>x;
        if(x==1)
        {
            cin>>y;
            if(y>=may)
            {
                may=y;
                mx.push(may);
            }
            st.push(y);
        }
        else if(x==2)
        {
            if(!st.empty())
            {
                if(!mx.empty())
                if(st.top()==mx.top())
                {
                    mx.pop();
                    if(!mx.empty())
                    may=mx.top();
                    else
                    may=0;
                }
                st.pop();
            }
        }
        else
        {
            if(!mx.empty())
            cout<<mx.top()<<endl;
            else
            cout<<0<<endl;
        }
    }
}
