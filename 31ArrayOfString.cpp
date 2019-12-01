#include <iostream>

using namespace std;

int main(){

string name[10];

// For entering data
for(int i=0; i<10; i++){
	cout<< "Enter name for student "<<i+1<<endl;
	cin >>name[i];
}

for(int i=0; i<10; i++){
	cout<<"Value of name"<<i+1<<" is "<< name[i]<< endl;
}

return 0;
}
