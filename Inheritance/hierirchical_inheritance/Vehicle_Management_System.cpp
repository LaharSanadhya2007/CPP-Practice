#include<iostream>
using namespace std;
class Vehicle
{
    protected:
    string brand, model;
    public:
    void getVehicleDetails()
    {
        cout<<"enter brand name: ";
        cin>>brand;
        cout<<"enter model name: ";
        cin>>model;
    }
};
class Car: public Vehicle
{
    int seatingCapacity;
    public:
    void getCarDetails()
    {
        cout<<"enter seating Capacity : ";
        cin>>seatingCapacity;
    }
    void displayCar()
    {
        cout<<"----------------CAR DETAILS-----------------"<<endl;
        cout<<"car brand: "<<brand<<endl;
        cout<<"car model: "<<model<<endl;
        cout<<"car seating Capacity: "<<seatingCapacity<<endl;
    }
};
class Bike: public Vehicle
{
    int engineCC;
    public:
    void getBikeDetails()
    {
        cout<<"enter engine capacity : ";
        cin>>engineCC;
    }
    void displayBike()
    {
        cout<<"----------------BIKE DETAILS-----------------"<<endl;
        cout<<"bike brand: "<<brand<<endl;
        cout<<"bike model: "<<model<<endl;
        cout<<"bike engine Capacity: "<<engineCC<<endl;
    }
};
int main()
{
    Car c;
    Bike b;
    c.getVehicleDetails();
    c.getCarDetails();
    c.displayCar();
    b.getVehicleDetails();
    b.getBikeDetails();
    b.displayBike();


}
