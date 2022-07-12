class Vehicle
{
  private:
    int vehicleID;
    const char* vehicleBrand;
    const char* vehicleType;
    int vehiclePrice;

  public:
    Vehicle();
    void setVehicleDetails(int vID, const char* vBrand, const char* vType, int vPrice);
    void displayVehicleDetails();
    void setVehiclePrice();
    ~Vehicle();
};