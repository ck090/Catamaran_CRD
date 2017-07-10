//* Egyptian Numbers *//
#include <bits/stdc++.h>
using namespace std;

void call_frac(long nr, long dr) {

	if(nr==0 || dr==0)
		return;

	if(nr%dr == 0) {
		cout << nr/dr;
		return;
	}

	if(dr%nr == 0) {
		cout << "1/" << dr/nr;
		return;
	}

	if(nr > dr) {
		cout << nr/dr << " + ";
		call_frac(nr%dr, dr);
		return;
	}

	long n = dr/nr + 1;
	cout << "1/" << n << " + ";
	call_frac(nr*n-dr, dr*n);
}

int main() {

	long x, y;
	cin >> x >> y;
	cout << "\nEgyptian fraction of " <<x<<"/"<<y<<" is ";

	call_frac(x, y);
	return 0;
}