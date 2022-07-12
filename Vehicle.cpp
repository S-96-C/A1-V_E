#include<iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(){}

void Vehicle::setVehicleDetails(int vID, const char* vBrand, const char* vType, int vPrice)
{
  vehicleID = vID;
  vehicleBrand = vBrand;
  vehicleType = vType;
  vehiclePrice = vPrice;
}

void Vehicle::displayVehicleDetails()
{
  cout << endl << "vehicleID = " << vehicleID << endl;

  cout << "vehicleBrand = " << vehicleBrand << endl;

  cout << "vehicleType = " << vehicleType << endl;

  cout << "vehiclePrice = " << vehiclePrice << endl;
}

void Vehicle::setVehiclePrice()
{
  cout << "Input new priceof vehicle " << vehicleID << " : ";
  cin >> vehiclePrice;
}

Vehicle::~Vehicle(){}
