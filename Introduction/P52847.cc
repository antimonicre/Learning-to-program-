#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	
	if (c > max(a,b)) {
		cout << c << endl;
	}
	else {
		cout << max(a,b) << endl;
	}
	
}
