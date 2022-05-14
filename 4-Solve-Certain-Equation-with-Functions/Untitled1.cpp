#include <iostream>
using namespace std;

void myFunction(int a, int b);

int main(){
	int num1, num2;
	cout<<"Hello, I can solve this equation y=a+bx for 1<=x<=10, if you give me a and b \n";
	cout<<"Enter the value of a : ";
	cin>>num1;
	cout<<"Enter the value of b : ";
	cin>>num2;
	myFunction(num1, num2);
}

void myFunction(int a, int b){
	for(int x=1; x<=10; x++){
		cout<<"when x = "<<x<<", y = "<<a + b * x<<"\n";
	}
}
