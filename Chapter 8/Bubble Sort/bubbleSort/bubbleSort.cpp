#include <iostream>
using namespace std;

const int SIZE = 5;

void getReady() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return;
}

void detailLoop(int numbers[], int& count) {
    int number = 0; // Initialize with a default value
    if (count < SIZE) {
        cout << "Enter a number: ";
        cin >> number;
        numbers[count] = number;
        count++;
    }
    return;
}

void bubbleSort(int arr[], int size) {
    bool swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Change this condition
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped by the inner loop, break
        if (!swapped)
            break;
    }
}

void finish(int numbers[]) {
    cout << "The highest three are " << numbers[SIZE - 1] << ", " << numbers[SIZE - 2] << ", " << numbers[SIZE - 3] << endl;
    return;
}

int main() {
    int numbers[SIZE];
    int count = 0;

    getReady();

    while (count < SIZE) {
        detailLoop(numbers, count);
    }

    bubbleSort(numbers, SIZE);
    finish(numbers);

    return 0;
}