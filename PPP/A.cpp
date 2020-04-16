#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)

using namespace std;

void solve(set<int> men, set<int> s1, set<int> s2)
{
    auto it=men.end();
    it--;
    int ans=0;
    if(it==men.begin())
    {
        if(s1.count(*it)!=0 && s2.count(*it)!=0)
        {
            ans=*it;
        }
    }
    for(it; it!=men.begin();it--)
    {
        //cout<<*it<<endl;
        if(s1.count(*it)!=0 && s2.count(*it)!=0)
        {
            ans=*it;
            break;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int n,m,o,x;
    cin>>n>>m>>o;
    int sum1=0,sum2=0,sum3=0;
    set<int> s1,s2,s3;
    vector<int> v1,v2,v3;
    fori(0,n)
    {
        cin>>x;
        v1.push_back(x);
    }
    fori(0,m)
    {
        cin>>x;
        v2.push_back(x);
    }
    fori(0,o)
    {
        cin>>x;
        v3.push_back(x);
    }
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    reverse(v3.begin(),v3.end());
    for(auto i:v1)
    {
        sum1+=i;
        s1.insert(sum1);
    }
    for(auto i:v2)
    {
        sum2+=i;
        s2.insert(sum2);
    }
    for(auto i:v3)
    {
        sum3+=i;
        s3.insert(sum3);
    }
    int mi=min(sum1,sum2);
    mi=min(mi,sum3);
    if(mi==sum1)
    {
        //cout<<"1 lol"<<endl;
        solve(s1,s2,s3);
    }
    else if(mi==sum2)
    {
        //cout<<"2 lol"<<endl;
        solve(s2,s1,s3);
    }
    else
    {
        //cout<<"3 lol"<<endl;
        solve(s3,s1,s2);
    }
}
