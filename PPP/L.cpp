#include <bits/stdc++.h>
#define fori(x, y) for (int i = x; i < y; i++)
#define forj(x, y) for (int j = x; j < y; j++)

using namespace std;

int main()
{
    int n, x, y;
    scanf("%d", &n);
    queue<int> q;
    fori(0,n)
    {
        scanf("%d", &x);
        if (x == 1)
        {
            scanf("%d", &y);
            q.push(y);
        }
        else if (x == 2)
        {
            if(!q.empty())
            q.pop();
        }
        else
        {
        	if(!q.empty())
            printf("%d\n", q.front());
            else
            printf("Empty!\n");
        }
    }
}
