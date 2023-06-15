#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, c, d;
        cin >> n;

        if (n % 3 == 0)
        {
            c = n / 3;
            d = n / 3;
        }
        else if (n % 3 == 1)
        {
            c = (n / 3) + 1;
            d = n / 3;
        }
        else if (n % 3 == 2)
        {
            c = n / 3;
            d = (n / 3) + 1;
        }
        cout << c << " " << d << endl;
    }

    return 0;
}