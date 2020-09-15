
// more pointers
#include <iostream>


int main()
{
	int* arr, n;
	std::cout << "Number of elements:\n";
	std::cin >> n;
	arr = new int[n];
	std::cout << "Enter elements:\n";
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	std::cout << "Your elements:\n";
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << std::endl;
	}
	int max = arr[0], min = max;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	std::cout << "Min and max:\n";
	std::cout << min << ", " << max;
	delete arr;
	return 0;
}

/*запилить ввод размера массива, его генерацию, поиск наибольшего и наименьшего элементов*/
