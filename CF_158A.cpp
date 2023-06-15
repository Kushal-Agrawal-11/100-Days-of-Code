#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int a[n], count = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[k] != 0)
        {
            if (a[i] >= a[k])
            {
                count++;
            }
        }
        else
        {
            if (a[i] > a[k])
            {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}