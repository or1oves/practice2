#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    constexpr int N = 100;
    int arr[N] = {};
    bool task = true;
    int taskNumber, maxOfNotSort, minOfNotSort, a, b, numberOfIndex, \
    firstIndex, secondIndex, maxOfSort, minOfSort, sumOfi, sum, numberOfIndex2, sumOfi2, zamenMinus, k, kOf;
    auto start = chrono::high_resolution_clock::now();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<float> durationTime = end - start;
    do {
        cout << "Введите номер пункта: ";
        cin >> taskNumber;
        if(taskNumber == 0) task = false;
        switch (taskNumber) {

            case (1):
                cout << '\n' << "Полученный массив: ";
                for (int i = 0; i < N; i++) {
                    arr[i] = rand() % 199 - 99;
                    cout << arr[i] << " ";
                }
                cout << '\n' << '\n';
                break;

            case (2):
                cout << '\n';
                start = chrono::high_resolution_clock::now();
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1 - i; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr1 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr1;
                        }
                    }
                }
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << "Полученный массив: ";
                for (int i = 0; i < N; i++) {
                    cout << arr[i] << " ";
                }
                cout << '\n' << '\n' << "Затраченное время: " << durationTime.count() << " секунд" << '\n' << '\n';
                break;

            case (3):
                maxOfNotSort = arr[0];
                minOfNotSort = arr[0];
                start = chrono::high_resolution_clock::now();
                for (int i = 1; i < N; ++i) {
                    if (arr[i] > maxOfNotSort) {
                        maxOfNotSort = arr[i];
                    }
                    if (arr[i] < minOfNotSort) {
                        minOfNotSort = arr[i];
                    }
                }
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << '\n' << "НЕОТСОРТИРОВАННЫЙ МАССИВ: " << '\n' << '\n' << "Минимальное значение: " \
                << minOfNotSort << '\n' << "Максимальное значение: " << maxOfNotSort << '\n' \
                << "Время поиска: " << durationTime.count() << " секунд" << '\n';
                cout << "Полученный массив: ";
                for (int i = 0; i < N; i++) {
                    cout << arr[i] << " ";
                }
                cout << '\n' << '\n';
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr2 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr2;
                        }
                    }
                }
                start = chrono::high_resolution_clock::now();
                maxOfSort = arr[99];
                minOfSort = arr[0];
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << "ОТСОРТИРОВАННЫЙ МАССИВ: " << '\n' << '\n' << "Минимальное значение: " \
                << minOfSort << '\n' << "Максимальное значение: " << maxOfSort << '\n' \
                << "Время поиска: " << durationTime.count() << " секунд" << '\n';
                cout << "Полученный массив: ";
                for (int i = 0; i < N; i++) {
                    cout << arr[i] << " ";
                }
                cout << '\n' << '\n';
                break;

            case(4):
                sum = 0;
                sumOfi2 = 0;
                sumOfi = 0;
                maxOfNotSort = arr[0];
                minOfNotSort = arr[0];
                for(int i = 0; i < N; ++i){
                    if (arr[i] > maxOfNotSort){
                        maxOfNotSort = arr[i];
                    }
                    if (arr[i] < minOfNotSort){
                        minOfNotSort = arr[i];
                    }
                }
                for (int i = 0; i < N; i++) {
                    for(int j = 0; j < N - 1; j++) {
                        if(arr[j] > arr[j+1]) {
                            int arr3 = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = arr3;
                        }
                    }
                }
                sum = ( (maxOfNotSort + minOfNotSort) / 2);
                cout << '\n' << "Среднее значение: " << sum << '\n';
                start = chrono::high_resolution_clock::now();
                for(int i = 0; i < N; i++){
                    if(arr[i] == sum) {
                        sumOfi += 1;
                        cout << i << " " << sumOfi; // неверно выводятся индексы, если их больше 1
                        }
                    else{
                        sumOfi2 += 1;
                        if(sumOfi2 == 100){
                            cout << "Таких индексов нет" << '\n';
                        }
                    }
                    }
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << "Затраченное время: " << durationTime.count() << " секунд" << '\n' << '\n';
                break;

            case(5):
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr4 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr4;
                        }
                    }
                }
                cout << '\n' << "Введите число: ";
                cin >> a;
                numberOfIndex = 0;
                while(arr[numberOfIndex] < a) {
                    numberOfIndex += 1;
                }
                cout << '\n' << "Количество элементов: " << numberOfIndex << '\n' << '\n';
                break;

            case(6):
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr4 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr4;
                        }
                    }
                }
                cout << '\n' <<  "Введите число: ";
                cin >> b;
                numberOfIndex2 = 99;
                while(arr[numberOfIndex2] > b){
                    numberOfIndex2 -= 1;
                }
                cout << "Количество элементов: " << 99 - numberOfIndex2 << '\n' << '\n';
                break;

            case(8):
                cout << '\n' << "Введите первый индекс: ";
                cin >> firstIndex;
                cout << '\n' << "Введите второй индекс: ";
                cin >> secondIndex;
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int arr4 = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = arr4;
                        }
                    }
                }
                start = chrono::high_resolution_clock::now();
                swap(arr[firstIndex], arr[secondIndex]);
                end = chrono::high_resolution_clock::now();
                durationTime = end - start;
                cout << '\n' << "Затраченное время: " << durationTime.count() << " секунд" << '\n';
                cout << '\n' << "Полученный массив: ";
                for(int i = 0; i < N; i++){
                    cout << arr[i] << " ";
                }
                cout << '\n';
                break;

            case(9):
                k = 0;
                cout << '\n' << "Введите число: ";
                cin >> zamenMinus;
                cout << '\n';
                for(int i = 0; i < N; i++) {
                    if (arr[i] % 2 == 0) {
                        arr[i] = arr[i] - zamenMinus;
                        arr[i] = arr[i] * (rand() % 9 + 1);
                        k += 1;
                    }
                    cout << arr[i] << " ";
                }
                    cout << '\n' << "Всего четных элементов: " << k << '\n' << "Всего нечетных элементов: " << 100-k << '\n';
                    int kOf = 0;
                    for (int j = 1; j < 10; ++j) {
                        for (int i = 0; i < N; ++i) {
                            if (arr[i] % j == 0) {
                                kOf++;
                            }
                        }
                        cout << kOf << " элементов, кратных " << j << '\n';
                        kOf = 0;
                    }
                    cout << '\n';
                break;
        }
    }
    while(task);
}