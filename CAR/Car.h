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
	const char * getMake() const;
	void setMake(char *make);
	const char * getModel() const;
	void setModel(char *model);
	int getYear() const;
	void setYear(int year);
	int getEngineVolume() const;
	void setEngineVolume(int engineVolume);
	const char * getColor() const;
	void setColor(char *color);
	Car &compareByYear(Car &car);
	Car &compareByEngineVolume(Car &car);

	friend std::ostream& operator<<(std::ostream& ostr, Car const& rhs);

	Car();
	Car(char *make, char *model, int year, int engineVolume, char *color);
	~Car();
};

