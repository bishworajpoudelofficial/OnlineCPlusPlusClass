#include <iostream>

using namespace std;
// Recursive Function: Function that call itself
int main(){
// Factorial 
cout<<"Enter number"<<endl;
int n, fact=1;
cin>>n;
// 5*4*3*2*1
// Using Loop
for(int i=n; i>0; i--){
	fact = fact*i;
}

// Print 
cout<<"The fact is "<<fact;

return 0;
}
