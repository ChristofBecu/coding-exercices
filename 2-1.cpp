#include <iostream>
using namespace std;

int main() {
	int first, second;
	cout << "input first number : " ;
	cin >> first;
	cout << "input second number : " ;
	cin >> second;
	if (first > second) {
		cout << first << " is the biggest number\n";
	}
	if (second > first) {	
		cout << second << " is the biggest number\n";
	}
	else {
		cout << "numbers are equal\n";
	}	
}
