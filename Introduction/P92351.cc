#include <iostream>
using namespace std;

int main() {
	long a,b;
	cin >> a >> b;
	if (a%b < 0) {
		if (a<0) cout << a/b -1 << " " << a%b + b << endl;
		else cout << a/(b-1) << " " << a%b + b << endl;
	}
	else {
		cout << a/b << " " << a%b << endl;
	}
	
}
