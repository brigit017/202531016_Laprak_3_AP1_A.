#include <iostream>
using namespace std;

int main  (){
	
	int Umur ;
	string Gear ;
	
	cout << "Masukkan Umur Peserta: ";
	cin >> Umur ;
	
	if (Umur < 10) {
		Gear = "Starter Kit";
	}
	else {
		if (Umur >= 10 && Umur <=15 ){
		Gear = "Basic Gear";
	}
	else {
		if (Umur >= 16 && Umur <= 20 ){
			Gear = "Pro Gear";
		}
		else {
			Gear = "Expert Gear";
		}
	}
}

cout << "Peralatan Tertinggi yang Boleh Dipakai :" << Gear << endl;
}
