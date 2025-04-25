#include <bits/stdc++.h>
using namespace std;

int main(void)
    {
        int t;
        cin >> t;
        while(t--)
            {
                int window;
                cin >> window;
                if(window == 1 || window == 2 || window == 4)
                    {
                        cout << "-1" << endl;
                    }
                else
                    {
                        if(window % 3 == 0)
                            {
                                cout << window / 3 << " 0 0" << endl;
                            }
                        else if(window % 3 == 1)
                            {
                                cout << (window - 7) / 3 << " 0 1" << endl;
                            }
                        else
                            {
                                cout << (window - 5) / 3 << " 1 0" << endl;
                            }
                    }
            }
        return 0;
    }
