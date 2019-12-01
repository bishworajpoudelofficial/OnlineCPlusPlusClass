#include <iostream>

using namespace std;
int fact(int num);
// Recursive Function: Function that call itself
int main(){

// Factorial 
cout<<"Enter number"<<endl;
int n;
cin>>n;

cout<<"The fact is "<<fact(n);

return 0;
}


int fact(int num){
	if(num==1){
		return 1;
	}else{
		return num*fact(num-1);
	}
}

// 5* 24
// 


