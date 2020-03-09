#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	ofstream o("sth.txt",ios::trunc);
	o<<"Hari"<<endl;
	o<<9804583<<endl;
	
	o.close();
	return 0;
}
