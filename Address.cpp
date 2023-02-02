#include "Address.h"

Address::Address(std::string city_, std::string street_, int buildingNumber_, int flatNumber_) {
	city = city_;
	street = street_;
	buildingNumber = buildingNumber_;
	flatNumber = flatNumber_;
}

void Address::set_address(std::string city_, std::string street_, int buildingNumber_, int flatNumber_) {
	city = city_;
	street = street_;
	buildingNumber = buildingNumber_;
	flatNumber = flatNumber_;
}
std::string Address::get_output_address() {
	return city + ", " + street + ", " + std::to_string(buildingNumber) + ", " + std::to_string(flatNumber) + "\n";
}

std::string Address::get_city() {
	return city;
}