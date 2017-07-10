//* Find a number, who's digits when multipied gives the original number *//
#include <bits/stdc++.h>
using namespace std;

int find_no(int n) {

	int newarr[100000], j = 0;

	if(n < 10) {
		cout << n+10;
		return 0;
	}

	for(int i = 9; i >= 2; i--) {
		while(n%i == 0) {
			n = n/i;
			newarr[j] = i;
			j++;
		}
	}

	if(n > 10) {
		cout << "-1(No number exists)";
		return 0;
	}

	for(int i = j-1;i >= 0; i--) {
		cout << newarr[i];
	}

	return j;
}


int main() {
	int n;
	cin >> n;
	cout << "Number when multiped by each other gives " << n << " is:  ";
	int size = find_no(n);
	cout << "\nThe number of digits is:  " << size;
}