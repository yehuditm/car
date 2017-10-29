#include "Car.h"

Car::Car(char *make, char *model, int year, int engineVolume, char *color)
{
	strcpy_s(m_make, make);
	strcpy_s(m_model, model);
	strcpy_s(m_color, color);
	setYear(year);
	setEngineVolume(engineVolume);
}

Car::Car()
{
}


Car::~Car()
{
}

char * Car::getMake()
{
	return m_make;
}

void Car::setMake(char *make)
{
	strcpy_s(m_make, make);
}

char * Car::getModel()
{
	return m_model;
}

void Car::setModel(char *model)
{
	strcpy_s(m_model, model);
}

int Car::getYear()
{
	return m_year;
}

void Car::setYear(int year)
{
	if (year > 1500)
	{
		m_year = year;
	}
	else
	{
		m_year = 1900;
	}
}

int Car::getEngineVolume()
{
	return m_engineVolume;
}

void Car::setEngineVolume(int engineVolume)
{
	if (engineVolume > 0)
	{
		m_engineVolume = engineVolume;
	}
	else
	{
		m_engineVolume = 0;
	}
}

char * Car::getColor()
{
	return m_color;
}

void Car::setColor(char *color)
{
	strcpy_s(m_color, color);
}

Car* Car::compareByYear(Car* car)
{
	if (m_year > car->getYear())
	{
		return this;
	}
	return car;
}

Car* Car::compareByEngineVolume(Car* car)
{
	if (m_engineVolume > car->getEngineVolume())
	{
		return this;
	}
	return car;
}

std::ostream& operator<<(std::ostream &ostr, Car const& car)
{
	ostr << "details of car:\nmake: " << car.m_make;
	ostr << "\nmodel: " << car.m_model << "\nyear: " << car.m_year;
	ostr << "\nengine volume: " << car.m_engineVolume << "\ncolor: " << car.m_color <<"\n";
	return ostr;
}


