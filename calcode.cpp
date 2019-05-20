#include <iostream>
using namespace std;

float num1;
float num2;
float ans;
int choice;

int main(){
cout << "Please choose from the following list" "\n 1. Addition" "\n 2. Subtraction"
"\n 3. Multiplication" "\n 4. Division" "\n 5. Square" " \n 6. Exit" << endl;
cin >> choice;
if(choice < 1 || choice > 6){
cout << "Choose a valid option"
else
switch(choice)
case 1:
	cout << "Enter 2 numbers to add" << endl;
	cin >> num1 >> num2;
	ans = num1 +num2;
	cout << ans;
case 2:
	cout << "Enter 2 numers to subtract" << endl;
	cin >> num1 >> num2;
	ans = num1 - num2;
	cout << ans;
case 3:
	cout << "Enter 2 numbers to multiply" << endl;
	cin >> num1 >> num2;
	ans = num1 * num2;
	cout << ans;
case 4:
	cout << "Enter 2 numbers to divide" << endl;
	cin >> num1 >> num2;
	ans = num1 / num2;
	cout << ans;
case 5:
	cout << "Enter a number to square" << endl;
	cin >> num1;
	ans = num1 * num1;
	cout << ans;
case 6:
	cout << "Exiting"
	return 0;
}}
