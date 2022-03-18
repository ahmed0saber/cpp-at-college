#include <iostream>
using namespace std;

int main(){
	int sum=0, number, index;
	float average;
	string check_input;
	cout<<"Welcome to my simple program, It's just an average calculator, Enter some numbers, then type 'done' when you are done.\n\n";
	for(index=0; true; index++){
		cout<<"Enter number "<<index+1<<" : ";
		cin>>check_input;
		if(check_input == "done"){
			break;
		}
		number = stoi(check_input);
		sum+=number;
	}
	if(index>0){
		average = (float)sum / (float)index;
		cout<<"Average of entered numbers = "<<average;
	}
	cout<<"\n\nThanks for using my program..\nDeveloped by ahmed0saber..";
}
