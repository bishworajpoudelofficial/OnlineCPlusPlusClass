#include <iostream>
#include <fstream>
using namespace std;

int main(){

ifstream i("sth.txt");

if(!i)cout <<"No File Found";

string name;
int no;

i>>name;
i>>no;

i.close();
cout <<"Name :" <<name <<" Phone: "<<no;










return 0;

}
