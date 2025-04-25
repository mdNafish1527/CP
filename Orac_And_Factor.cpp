#include <bits/stdc++.h>
using namespace std;

int fun(int n);

int main(void)
    {
        int t;
        cin >> t;
        while(t--)
            {
                int n,k;
                cin >> n >> k;
                while(k-- && n % 2)
                    {
                        n = fun(n);
                    }
                n += ((k + 1) * 2);
                cout << n << endl;
            }
        return 0;
    }

int fun(int n)
    {
        for(int i = 2 ; i <= n ; i++)
            {
                if(n % i == 0)
                    {
                        return i + n;
                    }
            }
        return n * 2;
    }
