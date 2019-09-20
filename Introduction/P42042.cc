#include <iostream>

using namespace std;

int main() {
	char ch;
	cin >> ch;
	
	if (ch == toupper(ch)) {
		cout << "uppercase" << endl;
	}
	else {
		cout << "lowercase" << endl;
	}
	
	ch = toupper(ch);
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		cout << "vowel" << endl;
	}
	else {
		cout << "consonant" << endl;
	}
}
