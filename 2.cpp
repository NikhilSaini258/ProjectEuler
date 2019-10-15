#include <iostream>
using namespace std;
#define ll unsigned long long

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        ll n;
        cin >> n;
        ll first = 1, second = 1, sum = 0;
        while(second <= n){
            if(second % 2 == 0)
                sum += second;
            auto temp = first+second;
            first = second;
            second = temp;
        }
        cout << sum << endl;
    }
    return 0;
}
