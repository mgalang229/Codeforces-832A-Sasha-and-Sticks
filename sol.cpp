#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

ll n, k;

void solve() {
	cin >> n >> k;
	if((n/k)%2==1) cout << "YES";
	else cout << "NO";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	solve();
}
