#include "CPPM7_4_1.h"

void CPPM7_4_1() {
	std::ifstream fin("in1.txt");
	std::ofstream fout("out1.txt");
	if (fin.is_open()) {
		int N;
		fin >> N;
		fout << N << "\n";
		Address* addresses = new Address[N];
		std::string city;
		std::string street;
		int buildingNumber;
		int flatNumber;
		for (int i = 0; i < N; i++) {
			fin >> city >> street >> buildingNumber >> flatNumber;
			addresses[i].set_address(city, street, buildingNumber, flatNumber);
		}
		for (int i = N - 1; i >= 0; i--) {
			fout << addresses[i].get_output_address();
		}
		delete[] addresses;
		addresses = nullptr;
	}
	else {
		std::cout << "in.txt is not open\n";
	}
	fin.close();
	fout.close();
}