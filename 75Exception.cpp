#include <iostream>

using namespace std;


int main(){
	
	// It takes 2 input from user
	int a, b;
	cout <<"Enter first number: "<<endl;
	cin >>a;
	cout<<"Enter second number: "<<endl;
	cin >>b;
	
	try{
	if(b == 0){
		throw(b);
	}
	
	int result = a/b;
	cout <<"Result is "<<result;
	}catch(int i){
		cout <<"Cannot divide by zero";
	}

	
	return 0;
}
