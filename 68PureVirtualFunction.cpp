#include <iostream>
using namespace std;
// Generalization:  Car[Tesla, Bmw, Innova], Shape [Rect, Oval, Circle], bike
// specialization: Rect---> Cubeoid;
class Bike{
	
	public: 
	virtual void start()=0; // pure virtual function
	virtual void stop() = 0;
};

class BulletBike: public Bike{
	public: 
	void start(){
		cout <<"Bullet Bike Started";
	}
	
	void stop(){
		cout <<"Bullet Bike Stopped";
	}
};
class VRBike: public Bike{
	public: 
	void start(){
		cout <<"Vr Bike Started";
	}
	
	void stop(){
		cout <<"Vr Bike Stopped";
	}
};
class HeroBike: public Bike{
	public: 
	void start(){
		cout <<"Hero Bike Started";
	}
	
	void stop(){
		cout <<"Hero Bike Stopped";
	}
};

int main(){

Bike *b = new BulletBike();
b->start();


return 0;
}
