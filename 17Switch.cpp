#include <iostream>

using namespace std;

int main(){
int day;
cout <<"Enter no of day";
cin>> day;

switch(day){
	case 1:
	cout << "Day is sunday"<<endl;
	break;
	case 2:
	cout << "Day is mon"<<endl;	
	break;
	case 3:
	cout << "Day is tue"<<endl;	
	break;
	case 4:
	cout << "Day is wed"<<endl;
	break;
	case 5:
	cout << "Day is thu"<<endl;
	break;
	case 6:
	cout << "Day is fri"<<endl;
	break;
	case 7:
	cout << "Day is sat"<<endl;
	break;
	default:
	cout << "Invalid input given";	
}


return 0;
}

/*
switch(var){
case 1:
stat

case 2:
stat


}


*/
