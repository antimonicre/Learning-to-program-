#include <iostream>
#include <math.h>
#include <cstdio>


using namespace std;

int main() {
	long double a;
	cin >> a;
	
	long long b = floor(a);
	cout << b << " ";
	b = ceil(a);
	cout << b << " ";
	b = round(a);
	cout << b << endl;
}
