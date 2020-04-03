#include <bits/stdc++.h>
#define fori(x,y) for(int i = x ; i < y ; i++)
#define forj(x,y) for(int j = x ; j < y ; j++)

using namespace std;

char s[1005], ss[1005];
string s1,s2;
map<string, string> mp;

int main()
{
    while(gets(s) && s[0]!='\0')
    {
        stringstream sss;
        sss<<s;
        sss>>s1;
        sss>>s2;
        mp[s2]=s1;
    }
    while(cin>>s1)
    {
        if(mp[s1]!="")
        cout<<mp[s1]<<endl;
        else
        cout<<"eh"<<endl;
    }
}