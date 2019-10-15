#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll ip; cin >> ip;

	ll out = 0;

	for (int i = 1; i < ip; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			out += i;
	}
	cout << out << endl;

	return 0;
}
