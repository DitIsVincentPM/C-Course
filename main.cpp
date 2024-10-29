#include <iostream>

void sortArray(int array[], int size);

int main() {
    int numbers[] = {1, 10, 3, 6, 9, 2, 4, 7, 8, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    sortArray(numbers, size);

    return 0;
}

void sortArray(int array[], int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        std::cout << array[i] << std::endl;
    }
}
