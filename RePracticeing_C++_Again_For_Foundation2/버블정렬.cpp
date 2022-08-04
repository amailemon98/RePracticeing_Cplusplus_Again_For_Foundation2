#include <iostream>

int main() {
	int arr[10] = { 75,23,86,54,23,98,44,23,86,45 };
	int tmp, n;

	std::cin >> n;

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		std::cout <<" "<< arr[i];
	}
}