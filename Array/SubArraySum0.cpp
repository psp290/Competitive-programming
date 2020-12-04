#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Write code here
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        /* code */
        arr[i] += arr[i - 1];
    }

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == 0)
        {
            cout << "Yes";
            return 0;
        }
        if (m[arr[i]] == 0)
        {
            m[arr[i]]++;
        }
        else
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    return 0;
}