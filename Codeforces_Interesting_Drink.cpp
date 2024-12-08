#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int shops;
  cin >> shops;
  vector<int> price(shops);
  for (int i = 0 ;i < shops ; i++)
  {
    cin >> price[i];
  }
  sort(price.begin(),price.end());
  int days;
  cin >> days;
  while(days--)
  {
    int money;
    cin >> money;
    int l = 0 , r = shops + 1;
    while(l + 1 < r)
    {
      int mid = (l + r) / 2;
      if(price[mid] <= money)
      {
        //ans = mid;
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
