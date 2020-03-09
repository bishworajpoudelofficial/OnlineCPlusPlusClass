// Pointer: It is a varible that contain memory address.

#include <iostream>
using namespace std;

int main(){

int a = 10;
int *p;
int **p2;
p2 = &p;
p = &a;

cout <<"Value of a ="<<a<<endl;

cout <<"Value of p = "<<p<<endl; 
cout <<"Value of p2 = "<<p2; 


	
return 0;
}



