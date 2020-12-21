#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=1e5;
ll a[mxN], n, k;

void solve() {
	cin >> n >> k;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	ll sum=0;
	//calculate the sum of the remainders of each a[i] when divided by 'k'
	for(int i=0; i<n; ++i)
		sum+=(a[i]%k);
	//get the remainder of the sum using 'k' to find the number of coins left
	cout << sum%k << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
