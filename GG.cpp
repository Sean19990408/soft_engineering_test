#include<iostream>

int main() {
	int i = 0;
	for (int k = 0; k < 100; k++) {
		i += (4+k);
	}
	std::cout << i << std::endl;
}