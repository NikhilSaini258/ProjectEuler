#include <iostream>

using namespace std;
#define ll unsigned long long

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        ll n;
        cin >> n;

        for(ll i = 2; i*i <= n; i++){
            while(n % i == 0 && n != i)
                n /= i;
        }
        cout << n << endl;
    }
    return 0;
}
