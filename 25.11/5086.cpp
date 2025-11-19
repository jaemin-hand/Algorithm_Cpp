#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
	while (1) {
		int A = 0, B = 0;
		cin >> A >> B;
		if (A == 0 && B == 0) {
			break;
		}

		if(B % A == 0) {
			cout << "factor" << endl;
		}

		else if (A % B == 0) {
			cout << "multiple" << endl;
		}

		else {
			cout << "neither" << endl;
		}
		
	 }

	return 0;
}