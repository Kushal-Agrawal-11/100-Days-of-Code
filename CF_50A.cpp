#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    if ((m * n) % 2 == 0)
    {
        cout << (m * n) / 2;
    }
    else
    {
        cout << ceil((m * n) / 2);
    }

    return 0;
}