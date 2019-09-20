#include <iostream>
using namespace std;
 
int main() {
    int euros, cents, cont=0;
    cin >> euros >> cents;
    
    while (euros >= 500) {
    	euros -= 500;
    	cont++;
	}
	cout << "Banknotes of 500 euros: " << cont << endl;
	
	cont = 0;
	while (euros >= 200) {
    	euros -= 200;
    	cont++;
	}
	cout << "Banknotes of 200 euros: " << cont << endl;
	
	cont = 0;
	while (euros >= 100) {
    	euros -= 100;
    	cont++;
	}
	cout << "Banknotes of 100 euros: " << cont << endl;
	
	cont = 0;
	while (euros >= 50) {
    	euros -= 50;
    	cont++;
	}
	cout << "Banknotes of 50 euros: " << cont << endl;
	
	cont = 0;
	while (euros >= 20) {
    	euros -= 20;
    	cont++;
	}
	cout << "Banknotes of 20 euros: " << cont << endl;
	
	cont = 0;
	while (euros >= 10) {
    	euros -= 10;
    	cont++;
	}
	cout << "Banknotes of 10 euros: " << cont << endl;
	
	cont = 0;
	while (euros >= 5) {
    	euros -= 5;
    	cont++;
	}
	cout << "Banknotes of 5 euros: " << cont << endl;
	
	cont = 0;
	while (euros >= 2) {
    	euros -= 2;
    	cont++;
	}
	cout << "Coins of 2 euros: " << cont << endl;
	
	cont = 0;
	while (euros >= 1) {
    	euros -= 1;
    	cont++;
	}
	cout << "Coins of 1 euro: " << cont << endl;
	
	cont = 0;
	while (cents >= 50) {
    	cents -= 50;
    	cont++;
	}
	cout << "Coins of 50 cents: " << cont << endl;
	
	cont = 0;
	while (cents >= 20) {
    	cents -= 20;
    	cont++;
	}
	cout << "Coins of 20 cents: " << cont << endl;
	
	cont = 0;
	while (cents >= 10) {
    	cents -= 10;
    	cont++;
	}
	cout << "Coins of 10 cents: " << cont << endl;
	
	cont = 0;
	while (cents >= 5) {
    	cents -= 5;
    	cont++;
	}
	cout << "Coins of 5 cents: " << cont << endl;
	
	cont = 0;
	while (cents >= 2) {
    	cents -= 2;
    	cont++;
	}
	cout << "Coins of 2 cents: " << cont << endl;
	
	cont = 0;
	while (cents >= 1) {
    	cents -= 1;
    	cont++;
	}
	cout << "Coins of 1 cent: " << cont << endl;
}
