#include <iostream>
using namespace std;

bool possiable(int n){
    int input[n];
    for(int i = 0 ; i < n ; i++) cin >> input[i];
    if(n == 1) return false;
    long long int sum = 0;
    long long int min_sum = 0;
    for(int i = 0 ;i < n ; i++){
        if(input[i] == 1) min_sum += 2;
        else min_sum += 1;
        sum += input[i];
    }
    if(sum >= min_sum) return true;
    else return false;

}

//the logic is the sum of the array must be at least the minimum possible sum

int main(){
    int test;
    cin >> test;

    while(test--){
        int size;
        cin >> size;
        bool ans = possiable(size);
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
