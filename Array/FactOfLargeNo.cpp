#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void fact(int n)
{
    int arr[2000] = {0};
    int k = 1;
    arr[0] = 1;
    if (n <= 1)
    {
        cout << "1";
        return;
    }

    for (int i = 2; i <= n; i++)
    {
        /* code */
        int carry = 0;
        for (int j = 0; j < 2000; j++)
        {
            int prod = arr[j] * i + carry;
            if (carry != 0 || prod != 0)
            {
                k = j;
            }
            arr[j] = prod % 10;
            carry = prod / 10;
        }
    }
    int res[k + 1];

    for (int i = 0; i <= k; i++)
    {
        /* code */
        res[i] = arr[i];
    }
    reverse(res, res + k + 1);

    for (int i = 0; i <= k; i++)
    {
        /* code */
        cout << res[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Write code here

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        fact(n);
        cout << endl;
    }

    return 0;
}