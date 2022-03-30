#include <iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    int num1, num2, result;
    char op;
    cout<<"Enter 2 numbers then an operator (+,-,*,/) to get the result calculated..\n";
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the operator (+,-,*,/): ";
    operator_error:
    cin>>op;
    if(op=='+') result=add(num1,num2);
    else if(op=='-') result=sub(num1,num2);
    else if(op=='*') result=multiply(num1,num2);
    else if(op=='/') result=divide(num1,num2);
    else{
        cout<<"Enter a valid operator (+,-,*,/) : ";
        goto operator_error;
    }
    cout<<"Result = "<<result;
    return 0;
}

int add(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int multiply(int a, int b){
	return a*b;
}
int divide(int a, int b){
	return a/b;
}
