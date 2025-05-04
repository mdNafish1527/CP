#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(void)
    {
        int t;
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
            vector<int> tmp;
            for(int i = 0 ; i < n ; i++)
                {
                    if(a[i] != ( i + 1))
                        {
                            tmp.push_back(abs(a[i] - (i + 1)));
                        }
                }
            int ans = gcd(tmp[0],tmp[1]);
            for(int i = 2 ; i < tmp.size() ; i++)
                {
                    ans = gcd(ans,tmp[i]);
                }
            cout << ans << endl;
            
        }
        
        return 0;
    }
