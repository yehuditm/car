#pragma once
#include <string.h>
#include <iostream>

#define SIZE_STRING 10
class Car
{
private:
	char m_make[SIZE_STRING];
	char m_model[SIZE_STRING];
	int m_year;
	int m_engineVolume;
	char m_color[SIZE_STRING];

public:
	char * getMake();
	void setMake(char *make);
	char * getModel();
	void setModel(char *model);
	int getYear();
	void setYear(int year);
	int getEngineVolume();
	void setEngineVolume(int engineVolume);
	char * getColor();
	void setColor(char *color);
	Car* compareByYear(Car* car);
	Car* compareByEngineVolume(Car* car);

	friend std::ostream& operator<<(std::ostream& ostr, Car const& rhs);

	Car();
	Car(char *make, char *model, int year, int engineVolume, char *color);
	~Car();
};

