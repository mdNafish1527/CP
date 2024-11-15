#include <iostream>
using namespace std;

int main(void)
{
    int test;
    cin >> test;
    while(test--)
        {
            int n;
            cin >> n;
            if(n % 2 == 0) cout << n - 3 << " 2 1" << endl;
            else{
                if(((n - 1) / 2) % 2 == 0) cout << ((n - 1) / 2) + 1 << " " << ((n - 1) / 2) - 1 << " " << "1" << endl;
                else cout << ((n - 1) / 2) + 2 << " " << ((n - 1) / 2) - 2 << " " << "1" << endl;
            }
        }
    return 0;
}
