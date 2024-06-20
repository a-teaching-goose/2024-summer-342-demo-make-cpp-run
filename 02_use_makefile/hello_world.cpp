#include <iostream>
#include "sorter.hpp"

int main(int argc, char **argv) {
	int array[] = {5, 4, 3, 2, 1};

    Sorter::bubble_sort(array, 5);

	for (int i=0; i<5; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
}
