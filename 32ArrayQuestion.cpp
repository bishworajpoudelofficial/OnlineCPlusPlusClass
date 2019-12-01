// WAP in C++, that takes 7 subject marks, and print average

#include <iostream>

using namespace std;

int main(){
	int num= 7, sum=0;
int marks[num];
// For storing mark
for(int i=0; i<num; i++){
	cout<< "Enter mark "<<i+1<<endl;
	cin >> marks[i];
}

for(int i=0; i<num; i++){
	sum = sum + marks[i];
}

int avg = sum/num;

cout<< "Average mark is "<<avg;

return 0;
}
