#include <iostream>

using namespace std;

int main(){

int day;
cout <<"Enter no of day";
cin>> day;

if(day == 1){
	cout << "Day is sunday";
}else if(day == 2){
	cout << "Day is monday";
}else if(day == 3){
	cout << "Day is tue";
}else if(day == 4){
	cout << "Day is wed";
}else if(day == 5){
	cout << "Day is thu";
}else if(day == 6){
	cout << "Day is friday";
}else if(day == 7){
	cout << "Day is sat";
}else{
		cout << "Invalid Date";
}


return 0;
}
