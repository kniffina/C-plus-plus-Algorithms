#include<iostream>
#include<map>
using namespace std;

int single_numbers(int arr[], int size) {
	map<int, int> hm;
	map<int, int>::iterator it;

	int number = 0;
	for (int i = 0; i < size; i++) {
		it = hm.find(arr[i]);
		if (it != hm.end())
			it->second += 1;
		else
			hm.insert(pair<int, int>(arr[i], 1));
	}
	for (int i = 0; i < size; i++) {
		it = hm.find(arr[i]);
		if (it->second == 1)
			return arr[i];
	}
	return 0;
}