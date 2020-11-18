#pragma once
#ifndef __VEHICLE__
#define __VEHICLE__



class Vehicle
{
public:
	enum class YearLimits {
		MIN_YEAR = 2010,
		MAX_YEAR = 2021
	};
	static const size_t SPEED_LIMIT = 360; // static const
	void setBrand(const char* brand);//setter
	void setYear(const size_t& year);
	void setMaxSpeed(const size_t& maxSpeed);
	const char* getBrand() const;//getter const
	const size_t & getYear() const;
	const size_t & getMaxSpeed() const;
	void print() const;
	Vehicle(); //default
	Vehicle(const char* brand, const size_t& year, const size_t& max_speed = SPEED_LIMIT);
	Vehicle(const char* brand);
	~Vehicle();
private:
	char* brand=nullptr; // it will dynamic field
	size_t year=0; //year of create
	size_t max_speed=0; //masx speed


};
#endif // !1 