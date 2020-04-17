#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)

using namespace std;
map<string,int>mp;

void solve(queue<int> left, queue<int> right, int l)
{
    int place=1;
    int sum=0, cont=0;
    while(!left.empty() || !right.empty())
    {
        cont++;
        sum=0;
        if(place==1)
        {
            while(!left.empty() && sum+left.front()<=l)
            {
                sum+=left.front();
                left.pop();
            }
            place=2;
        }
        else
        {
            while(!right.empty() && sum+right.front()<=l)
            {
                sum+=right.front();
                right.pop();
            }
            place=1;
        }
    }
    cout<<cont<<endl;
}

int main()
{
    int n,l,m,cm;
    string s;
    cin>>n;
    mp["left"]=1;
    mp["right"]=2;
    while(n--)
    {
        cin>>l>>m;
        l*=100;
        queue<int> q,q1;
        while(m--)
        {
            cin>>cm>>s;
            if(s=="right")
            q1.push(cm);
            else
            q.push(cm);
        }
        solve(q, q1, l);
    }
}