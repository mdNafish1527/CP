#include <bits/stdc++.h>
using namespace std;

int main(void)
    {
        int t;
        cin >> t;
        while(t--)
            {
                int a1,b1,a2,b2;
                cin >> a1 >> b1 >> a2 >> b2;
                if((a1 == a2) && (b1 + b2 == a1))
                    {
                        cout << "Yes" << endl;
                    }
                else if((b1 == b2) && (a1 + a2 == b1))
                    {
                        cout << "Yes" << endl;
                    }
                else if((a1 == b2) && (a2 + b1 == a1))
                    {
                        cout << "Yes" << endl;
                    }
                else if((a2 == b1) && (a1 + b2 == a2))
                    {
                        cout << "Yes" << endl;
                    }
                else
                    {
                        cout << "No" << endl;
                    }
            }
        return 0;
    }
