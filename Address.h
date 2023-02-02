#pragma once
#include <iostream>
#include <string>

class Address {
public:
	Address(std::string city_ = "", std::string street_ = "", int buildingNumber_ = 0, int flatNumber_ = 0);
	std::string get_output_address();
	void set_address(std::string city_, std::string street_, int buildingNumber_, int flatNumber_);
	std::string get_city();
private:
	std::string city;
	std::string street;
	int buildingNumber;
	int flatNumber;
};