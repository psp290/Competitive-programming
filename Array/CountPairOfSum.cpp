#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int a[], int n, int k)
{

    unordered_map<int, int> m;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int x = k - a[i];
        if (m[x] == 0)
        {
            m[a[i]]++;
        }
        else
        {
            c += m[x];
            m[a[i]]++;
        }
    }

    return c;
}