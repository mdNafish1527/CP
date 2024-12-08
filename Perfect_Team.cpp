#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int t;
  cin >> t;
  while(t--)
  {
    int a,b,c;
    cin >> a >> b >> c;
    int l = 0 , r = (a + b + c) / 3 + 1;
    while(l + 1 < r)
    {
      int mid = (l + r) / 2;
      if(mid <= a && mid <= b)
      {
        l = mid;
      }
      else
      {
        r = mid;
      }
    }
    cout << l << endl;
  }
  return 0;
}
