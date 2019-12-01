#include <iostream>
//2. Function with return type and parameter
using namespace std;
int findSum(int a, int b);
int main(){

cout << "The sum is "<<findSum(30,100);

return 0;
}

int findSum(int a, int b){
	return a+b;
}
