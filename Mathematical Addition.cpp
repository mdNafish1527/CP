#include <iostream>
using namespace std;

int main(){
    long long int test;
    cin >> test;
    while(test--){
        long long int u,v;
        cin >> u >> v;
        long long int x,y;
        long long int temp = u * v * (u + v);
        // x * v * v + y * u * u = 0
        x = u * u;
        y = - (v * v);
        cout << x << " " << y << endl;
        
    }
    return 0;
}
