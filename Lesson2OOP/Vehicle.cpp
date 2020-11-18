#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;
void Vehicle::setBrand(const char* brand)
{
    if (brand == nullptr || strlen(brand) == 0)
    {
        return;
    }
    if (this->brand != nullptr)
    {
        delete [] this->brand;
    }
    size_t size = strlen(brand) + 1;
    this->brand = new char[size];
    strcpy_s(this->brand, size, brand);// 1 param - where copy? 2 param - size, 3 param - waht we copy
}

void Vehicle::setYear(const size_t& year)
{
    if (year > (size_t)YearLimits::MAX_YEAR)
    {
        this->year = (size_t)YearLimits::MAX_YEAR; //private year (Class object) = fucntion paramater year
    }
    else if (year < (size_t)YearLimits::MIN_YEAR)
    {
        this->year = (size_t)YearLimits::MIN_YEAR;
    }
    else {
        this->year = year;
    }
}

void Vehicle::setMaxSpeed(const size_t& maxSpeed)
{
    if (maxSpeed < SPEED_LIMIT)
    {
        this->max_speed = maxSpeed;
    }
    else {
        this->max_speed = SPEED_LIMIT;
    }
}

const char* Vehicle::getBrand() const
{
    return brand;
}

const size_t& Vehicle::getYear() const
{
    return year;
    // TODO: insert return statement here
}

const size_t& Vehicle::getMaxSpeed() const
{
    return max_speed;
    // TODO: insert return statement here
}

void Vehicle::print() const
{

    cout << "Brand: " << brand<<endl;
    cout << "Year: " << year <<endl;
    cout << "Max Speed: " << max_speed<<endl;
}

Vehicle::Vehicle()
     :Vehicle("Unkown Vehicle",0,0)
{
    
}

Vehicle::Vehicle(const char* brand, const size_t& year, const size_t& max_speed)
{
    setBrand(brand);
    setYear(year);
    setMaxSpeed(max_speed);
}

Vehicle::Vehicle(const char* brand)
    :Vehicle(brand, (size_t)YearLimits::MIN_YEAR)
{
    /* setBrand(brand);
    setYear((size_t)YearLimits::MIN_YEAR);
    setMaxSpeed(SPEED_LIMIT); */
}

Vehicle::~Vehicle()
{
    if (brand!=nullptr)
    {
        delete[] brand;
        brand = nullptr;
    }
}
