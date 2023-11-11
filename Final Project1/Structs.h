#pragma once
#include<iostream>
using namespace std;
// structura mashini
struct Car
{
    char carBrand[20];
    char carModel[20];
    char color[15];
    char registrationNumber[15];
    short yearOfProduction{};
    float engineCar{};
    short rentalPricePerDay{};
};
// struktura klienta
struct Client
{
    char name[20];
    char surname[40];
    char middleName[10];
};
// struktura kontrakta
struct Contract {
    char name[20];
    char surname[40];
    char middleName[10];
    char registrationNumber[15];
    char carBrand[100];
    char carModel[100];
    int rentDays{};
    char startDay[10];
    char endDay[10];
    short totalRentalPrice{};
};
// struktura zadoljnostey
struct Arrers
{
    char nameArrer[20];
    char surnameArrer[40];
    char middleNameArrer[20];
    short totalDebt{};
};