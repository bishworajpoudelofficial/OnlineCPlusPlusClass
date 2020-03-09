#include <iostream>

using namespace std;

int divide(int a, int b){
	cout <<"We are inside function.";
	
		if(b == 0){
		throw(b);
	}
	
	return a/b;
	
}

int main(){
int a, b;
cout <<"Enter a: "<<endl;
cin >>a;
cout <<"Enter b:"<<endl;
cin >>b;



try{
cout <<"Division is "<<divide(a,b);	
} catch(int x){
	cout <<"Cannot divide by 0.";
}

return 0;
}
