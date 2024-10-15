// C++ (intermedio) - Arreglos o listas
// ------------------------------------------------------------------------------
// Implementa el algoritmo orden burbuja (bubble sort).
// Crea una función que toma un arreglo de números enteros y lo ordena.

#include <iostream>

using namespace std;

void swap(int numbers[], int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void sort(int numbers[], int size) {
    for(int i = 0; i < size; i++)
        for(int j = 1; j < size; j++)
            if(numbers[j] < numbers[j - 1])
                swap(numbers, j, j - 1);
}

int main() {
    int numbers[] = { 6, 2, 5, 4, 3, 7 };
    
    sort(numbers, size(numbers));
    
    for(int number: numbers)
        cout << number << endl;
    
    return 0;
}
