#include "CPPM7_4_2.h"

void sort(Address* address, int size); // перегрузка оператора больше
int operator_more(Address a, Address b); // сортировка по городу адреса

void CPPM7_4_2() {
	std::ifstream fin("in2.txt");
	std::ofstream fout("out2.txt");
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
		sort(addresses, N);
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

void sort(Address* address, int size) {
	Address temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (operator_more(address[i], address[j])) {
				temp = address[i];
				address[i] = address[j];
				address[j] = temp;
			}
		}
	}
}
int operator_more(Address a, Address b)
{
	if (a.get_city() > b.get_city()) return 1;
	else return 0;
}