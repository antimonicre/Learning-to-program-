#include <iostream>
using namespace std;

int main() {
	//INTRODUCIR INPUT
	char a;
	cin >> a;
	
	//CONVERTIR
	if (a == toupper(a)) {
		a = tolower(a);
	}
	else {
		a = toupper(a);
	}
	cout << a << endl;
	
}
