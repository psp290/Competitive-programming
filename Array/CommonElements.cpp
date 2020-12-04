#include <bits/stdc++.h>
using namespace std;

vector<int> commonElement(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> m;
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            m.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    vector<int> z;

    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] != m[i + 1])
        {
            z.push_back(m[i]);
        }
    }
    return z;
}