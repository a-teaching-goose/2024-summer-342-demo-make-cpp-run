#include "sorter.hpp"

void Sorter::bubble_sort(int *data, int length) {
    if (data == nullptr || length < 2) {
        return;
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }
}