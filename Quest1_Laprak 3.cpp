#include <iostream>
using namespace std;

int main(){
	
	int kecepatan ;
	string Level ;
	
	cout << "Masukkan Kecepatan Drone (km/h): ";
	cin >> kecepatan;
	
	if  (kecepatan < 40 ){
		Level = " Basic";	
	}else if (kecepatan >= 40 && kecepatan <= 79){
		Level  = "Intermediate";
	}else if (kecepatan >= 80 && kecepatan <= 119){
		Level = " Advanced";
	}else {
		Level = "Ultra";
	}
	
	cout << endl;
	
	cout <<"Anda Termasuk Level " << Level;
	
}
