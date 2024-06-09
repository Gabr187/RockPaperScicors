#include <iostream>
#include <Windows.h>
#include <time.h>

int randint(int x) {
	srand(time(0));
	return (rand() % x) + 1;
}
int pcansw() {
	int answ = randint(3);
	if (answ == 1) {
		return 1;
	}
	else if (answ == 2) {
		return 2;
	}
	else {
		return 3;
	}
}

int main() {
	int mys = 0;
	int pcs = 0;
	while (!GetAsyncKeyState(VK_ESCAPE)) {
		int mya = 0;
		std::cout << "Schere(1)/Stein(2)/Papier(3)" << '\n';
		std::cin >> mya;
		int pcans = pcansw();
		if (mya == 1) {
			if (pcans == 1) {
				std::cout << "Gleichstand" << '\n';
			}
			else if (pcans == 2) {
				std::cout << "Du verlierst" << '\n';
				pcs += 1;
			}
			else {
				std::cout << "Du Gewinnst" << '\n';
				mys += 1;
			}
		}
		else if (mya == 2) {
			if (pcans == 1) {
				std::cout << "Du Gewinnst" << '\n';
				mys += 1;
			 }
			else if (pcans == 2) {
				std::cout << "Gleichstand" << '\n';
			}
			else {
				std::cout << "Du Verlierst" << '\n';
				pcs += 1;
			}
		}
		else {
			if (pcans == 1) {
				std::cout << "Du Verlierst" << '\n';
				pcs += 1;
			}
			else if (pcans == 2) {
				std::cout << "Du Gewinnst" << '\n';
				mys += 1;
			}
			else {
				std::cout << "Gleichstand" << '\n';
			}
		}
	}
	std::cout << '\n';
	std::cout << "Deine Punkte: " << mys << " " << '\n';
	std::cout << "PC Punkte: " << pcs << " " << '\n';
}
