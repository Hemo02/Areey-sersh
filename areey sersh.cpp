#include <iostream>

using namespace std;

int main() {

	int number;
	int arrety[4]={};
	for (int i=0;i<4;i++) {
		cout << "enter the indix [" << i << "] :"<<endl;
		cin >> arrety[i];
	}
		cout << "enter the number :"<<endl;
		cin >> number;
		for (int i = 0;i < 4;i++) {
			if (number == arrety[i]) {
				cout << "the number is found :" << number <<endl;
				break;
			}
			else if (i == 3) {
				cout << "the number is not found ";
			}
		}
	return 0;
}