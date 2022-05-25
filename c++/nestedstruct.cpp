#include<iostream>
#include<string>
using namespace std;
//nested
struct camera
{
    int front;
    int rear;
};
struct phone{
    string name;
    int RAM;
    int ROM;
    string processor;
    //nest
    camera camera;
    double price;
};
int main(){
phone moto;

            moto.name="moto1";
            moto.price=64000;
            moto.processor="Snapdragoon";
            moto.RAM=8;
            moto.RAM=128;
            //nest installise
            moto.camera.front=44;
            moto.camera.front=123;


        cout << "Name " << moto.name;
	cout << endl << "Processor " << moto.processor;
	cout << endl << "Price " << moto.price;
	cout << endl << "Camera front" << moto.camera.front;
	cout << endl << "camera rear " << moto.camera.rear;
	cout << endl << "RAM " << moto.RAM;
	cout << endl << "ROM " << moto.ROM;
    return 0;

}

