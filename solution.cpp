#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define dd double
#define pb push_back
#define mp make_pair
#define F first
#define S second

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ios_base& scientific (ios_base& str);

ll n, arr[100005];
cin >> n;
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	ll ans = 0;
	for (ll i = 0; i < n - 1; i++) {
		if ((arr[i] % arr[n - 1]) >= ans) {
			ans = (arr[i] % arr[n - 1]);
		}
	}
	cout << ans;
return 0;
}