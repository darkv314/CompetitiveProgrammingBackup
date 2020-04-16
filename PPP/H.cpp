#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s;
        stack<char>st;
        int cont=0,c=0;
        getline(cin,s);
        if(s.empty())
        {
            cout<<"Yes"<<endl;
            continue;
        }
        else
        fori(0,s.size())
        {
            if(s[i]=='(' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]==')' || s[i]==']')
            {
                if(!st.empty())
                {
                    if((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='['))
                    st.pop();
                    else
                    {
                        st.push(s[i]);
                        break;
                    }
                }
                else
                {
                    st.push(s[i]);
                    break;
                }
            }
        }
        if(!st.empty())
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
}