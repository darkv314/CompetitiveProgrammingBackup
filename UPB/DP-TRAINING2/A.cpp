#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x, y;
    vector<int> coins, orders, original;
    map<int, int> prices;
    coins.push_back(0);
    orders.push_back(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        coins.push_back(x);
        prices[x] = i;
    }
    cin >> m;
    while (m--)
    {
        cin >> x;
        orders.push_back(x);
        original.push_back(x);
    }
    sort(coins.begin(), coins.end());
    sort(orders.begin(), orders.end());
    vector<vector<int>> table;
    table.assign(110, vector<int>());
    for (int i = 0; i < 110; i++)
    {
        for (int j = 0; j < 30010; j++)
        {
            table[i].push_back(0);
        }
    }
    for (int i = 0; i < coins.size(); i++)
    {
        table[i][0] = 1;
    }

    for (int i = 1; i < coins.size(); i++)
    {
        for (int j = 0; j < orders[orders.size() - 1] + 1; j++)
        {
            if (j - coins[i] >= 0)
                table[i][j] = table[i - 1][j] + table[i][j - coins[i]];
            else
                table[i][j] = table[i - 1][j];
        }
    }

    for (int i = 0; i < original.size(); i++)
    {
        if (table[coins.size() - 1][original[i]] == 0)
        {
            cout << "Impossible" << endl;
        }
        else if (table[coins.size() - 1][original[i]] > 1)
            cout << "Ambiguous" << endl;
        else if (table[coins.size() - 1][original[i]] == 1)
        {
            int num = original[i];
            deque<int> res;
            int j = coins.size() - 1;
            while (num != 0)
            {
                while (table[j][num] == 1)
                {
                    j--;
                }
                j++;
                res.push_front(prices[coins[j]]);
                num = num - coins[j];
            }

            for (int j = 0; j < res.size(); j++)
            {
                if (j != res.size() - 1)
                    cout << res[j] << " ";
                else
                    cout << res[j] << endl;
            }
        }
    }

    // for (int i = 0; i < coins.size(); i++)
    // {
    //     for (int j = 0; j < orders[orders.size() - 1] + 1; j++)
    //     {
    //         cout << table[i][j];
    //     }
    //     cout << endl;
    // }
}