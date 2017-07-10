//* Find a number of trailing zeros in Fibo type series *//
#include <bits/stdc++.h>
using namespace std;

long long Recursive_call(long long S[], int N) {

	if(N == 0)
		return S[0];
	if(N == 1)
		return S[1];
	else {
		return (Recursive_call(S, N-1) * Recursive_call(S, N-2));
	}
}

int count_zeroes(long long result) {

	int count = 0, j = 1;
	while(result%5 == 0) {
		result /= 5;
		count++;
	}
	return count;
}

int main() {

	long long S[1000002], N;
	cin >> S[1] >> S[0] >> N;

	long long result = Recursive_call(S, N);
	int ans = count_zeroes(result);

	cout << "The reuslt of S(n) = S(n-1) * S(n-2) recursion is:  " << result;
	cout << "\nNumber of trailing zeros is:  " << ans;

}