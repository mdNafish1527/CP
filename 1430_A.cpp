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
                bool last = false;
                for(int i = 0 ; i * 3 <= window ; i++)
                    {
                        bool one = false;
                        for(int j = 0 ; j * 5 + i * 3 <= window ; j++)
                            {
                                bool two = false;
                                for(int k = 0 ; k * 7 + j * 5 + 3 * i <= window ; k++)
                                    {
                                        if(i * 3 + j * 5 + k * 7 == window)
                                            {
                                                cout << i << " " << j << " " << k << endl;
                                                one = true;
                                                two = true;
                                                break;
                                            }
                                    }
                                if(two) break;
                            }
                        if(one)
                            {
                                last = true;
                                break;
                            }
                    }
                if(!last)
                    {
                        cout << "-1" << endl;
                    }
            }
        return 0;
    }
