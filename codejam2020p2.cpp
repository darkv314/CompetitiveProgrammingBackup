#include <bits/stdc++.h>
#define fori(x,y) for(int i = x ; i < y ; i++)
#define forj(x,y) for(int j = x ; j < y ; j++)

using namespace std;

int mx=-99;

string fixS(string s, char num)
{
    int help;
    stringstream sss;
    sss<<num;
    sss>>help;
    if(help>mx)
    {
        return s;
    }
    else
    {
        string ans="";
        int ind=0,laux;
        for(int l = 0 ; l < s.size(); l++)
        {
            if(s[l]=='(' or s[l]==')')
            continue;
            if(s[l]>num)
            {
                ind++;
                if(ind==1)
                laux=l;
            }
            else
            {
                if(ind!=0)
                {
                    ans+="(";
                    ans+=fixS(s.substr(laux,ind),num+1);
                    ans+=")";
                }
                ind=0;
                ans+=s[l];
            }
            //cout<<ans<<" iteracion ans"<<endl;
        }
        if(ind!=0)
        {
            ans+="(";
            ans+=fixS(s.substr(laux,ind),num+1);
            ans+=")";
        }
        //cout<<ans<< " la respuesta"<<endl;
        return ans;
    }
}

int main()
{
    int t,ind=0;
    string s,aux,aux1,aux2,res="";
    cin>>t;
    for(int p = 1; p <=  t; p++)
    {
        cin>>s;
        for(int i = 0 ; i<s.size();i++)
        {
            if(s[i]>mx)
            mx=s[i];
        }
        char au=mx;
        stringstream ss;
        ss<<au;
        ss>>mx;
        fori(0,s.size())
        {
            if(s[i]=='0')
            {
                if(i!=ind)
                {
                    res+="(";
                    res+=fixS("("+s.substr(ind,i-ind)+")",'1');
                    res+=")";
                }
                res+="0";
                ind=i+1;
            }
        }
        if(s.size()!=ind)
        {
            res+="(";
            res+=fixS("("+s.substr(ind,s.size()-ind)+")",'1');
            res+=")";
        }
        cout<<"Case #"<<p<<": "<<res<<endl;
        res="";
        ind=0;
    }
}