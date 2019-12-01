// Multi Dimentional Array
#include <iostream>

using namespace std;

int main(){
int a[2][3];

for(int i=0; i<2; i++){
	for(int j=0; j<3; j++){
		cout << "Enter value for "<<i<<" "<<j<<": ";
		cin >> a[i][j]; 
	}
}

for(int i=0; i<2; i++){
	for(int j=0; j<3; j++){
		cout<<a[i][j]<"\t ";
	}
	cout <<endl;
}

return 0;
}
