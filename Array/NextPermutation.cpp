#include <bits/stdc++.h>
using namespace std;

/// Important and logical
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int revp = 0;

        // Find a reverse point
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i] > a[i - 1])
            {
                revp = i;
                break;
            }
        }

        // if revp is starting point then simply reverse it
        if (revp == 0)
        {

            reverse(a, a + n);
        }
        else
        {
            // take point where it is less than revp in next array
            int temp = n - 1;
            for (int i = revp; i < n; i++)
            {
                /* code */
                if (a[revp - 1] > a[i])
                {
                    /* code */
                    temp = i;
                    break;
                }
            }

            if (a[n - 1] > a[revp - 1])
            {

                swap(a[revp - 1], a[temp]);
                reverse(a + revp, a + n);
            }
            else
            {
                swap(a[revp - 1], a[temp - 1]);
                reverse(a + revp, a + n);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}