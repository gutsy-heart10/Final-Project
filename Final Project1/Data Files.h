#pragma once
#include<iostream>
using namespace std;

// Funkciya dlya zapisi dannix
void saveDataToFile(Car* carMenu, Client* clientMenu, Contract* contractMenu, Arrers* arrersMenu, int& lengthCars, int& lengthClients, int& lengthContracts, int& lengthArrers) {
	FILE* file;
	fopen_s(&file, "rental_cars_data.dat", "wb");
	if (file != nullptr) {
		fwrite((char*)carMenu, sizeof(Car), lengthCars, file);
		fwrite((char*)clientMenu, sizeof(Client), lengthClients, file);
		fwrite((char*)contractMenu, sizeof(Contract), lengthContracts, file);
		fwrite((char*)arrersMenu, sizeof(Arrers), lengthArrers, file);
		fclose(file);
	}
}
// Funkciya dlya cteniye dannix
void loadDataFromFile(Car* carMenu, Client* clientMenu, Contract* contractMenu, Arrers* arrersMenu, int& lengthCars, int& lengthClients, int& lengthContracts, int& lengthArrers) {
	FILE* file;
	fopen_s(&file, "rental_cars_data.dat", "rb");
	if (file != nullptr) {
		fread((char*)carMenu, sizeof(Car), lengthCars, file);
		fread((char*)clientMenu, sizeof(Client), lengthClients, file);
		fread((char*)contractMenu, sizeof(Contract), lengthContracts, file);
		fread((char*)arrersMenu, sizeof(Arrers), lengthArrers, file);
		fclose(file);
	}
}