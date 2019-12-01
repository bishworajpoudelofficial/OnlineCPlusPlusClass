#include <iostream>

using namespace std;
void showArray(int a[]);
int main(){

int a[] = {1,2,3,4,5,9};
showArray(a);

return 0;
}

void showArray(int a[]){
	
	int len= sizeof(a);
	// Showing
	for(int i=0; i<len; i++){
		cout<<a[i]<<endl;
	}
}
