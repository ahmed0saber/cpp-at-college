#include <iostream>
using namespace std;

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
    if(op=='+') result=num1+num2;
    else if(op=='-') result=num1-num2;
    else if(op=='*') result=num1*num2;
    else if(op=='/') result=num1/num2;
    else{
        cout<<"Enter a valid operator (+,-,*,/) : ";
        goto operator_error;
    }
    cout<<"Result = "<<result;
    return 0;
}
