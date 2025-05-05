#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(void)
    {
        ll t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            vector<int> a(n);
            for(int i = 0 ; i < n ; i++)
                {
                    cin >> a[i];
                }
            int max_ele = a[0];
            for(int i = 2 ; i < n ; i += 2)
                {
                    max_ele = max(max_ele,a[i]);
                }
            cout << max_ele << endl;
        }
        
        return 0;
    }
