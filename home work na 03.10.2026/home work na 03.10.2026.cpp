/*Завдання 1
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Згенерований масив: ";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1; 
        cout << arr[i] << " ";
    }
    cout << endl;

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Мінімальний елемент: " << minVal << endl;
    cout << "Максимальний елемент: " << maxVal << endl;

    return 0;
}*/
/* Завдання 2
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double profit[12];
    cout << "Введіть прибуток фірми за 12 місяців:\n";
    for(int i = 0; i < 12; i++) {
        cout << "Місяць " << i + 1 << ": ";
        cin >> profit[i];
    }
    
    int start, end;
    cout << "Введіть початковий місяць діапазону (1-12): ";
    cin >> start;
    cout << "Введіть кінцевий місяць діапазону (1-12): ";
    cin >> end;
    
    if(start > end) swap(start, end);
    
    int sIdx = start - 1;
    int eIdx = end - 1;
    
    int maxMonth = sIdx;
    int minMonth = sIdx;
    
    for(int i = sIdx + 1; i <= eIdx; i++) {
        if(profit[i] > profit[maxMonth]) maxMonth = i;
        if(profit[i] < profit[minMonth]) minMonth = i;
    }
    
    cout << "Місяць з максимальним прибутком: " << maxMonth + 1 << " (сума: " << profit[maxMonth] << ")" << endl;
    cout << "Місяць з мінімальним прибутком: " << minMonth + 1 << " (сума: " << profit[minMonth] << ")" << endl;
    
    return 0;
}*/
/*Завдання 3
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Введіть розмір масиву N: ";
    cin >> n;

    double* arr = new double[n];
    cout << "Введіть елементи масиву:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double sumNeg = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) sumNeg += arr[i];
    }
    cout << "1. Сума від'ємних елементів: " << sumNeg << endl;

    int minIdx = 0, maxIdx = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[minIdx]) minIdx = i;
        if(arr[i] > arr[maxIdx]) maxIdx = i;
    }

    int startIdx = min(minIdx, maxIdx);
    int endIdx = max(minIdx, maxIdx);
    double prodMinMax = 1;
    bool hasBetween = false;

    for(int i = startIdx + 1; i < endIdx; i++) {
        prodMinMax *= arr[i];
        hasBetween = true;
    }
    if(hasBetween) {
        cout << "2. Добуток елементів між min і max: " << prodMinMax << endl;
    } else {
        cout << "2. Між min і max елементами немає інших елементів." << endl;
    }

    double prodEvenIdx = 1;
    for(int i = 0; i < n; i += 2) {
        prodEvenIdx *= arr[i];
    }
    cout << "3. Добуток елементів з парними номерами: " << prodEvenIdx << endl;

    int firstNeg = -1, lastNeg = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            if(firstNeg == -1) firstNeg = i;
            lastNeg = i;
        }
    }

    if(firstNeg != -1 && lastNeg != -1 && lastNeg - firstNeg > 1) {
        double sumBetweenNeg = 0;
        for(int i = firstNeg + 1; i < lastNeg; i++) {
            sumBetweenNeg += arr[i];
        }
        cout << "4. Сума елементів між першим і останнім від'ємними: " << sumBetweenNeg << endl;
    } else {
        cout << "4. Недостатньо від'ємних елементів для пошуку суми між ними." << endl;
    }

    delete[] arr;
    return 0;
}
*/
/* Завдання 4
#include <iostream>

using namespace std;

int main() {
    int arr10[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr5_1[5];
    int arr5_2[5];

    for(int i = 0; i < 5; i++) {
        arr5_1[i] = arr10[i];      
        arr5_2[i] = arr10[i + 5];   

    cout << "Перший масив (5 елементів): ";
    for(int i = 0; i < 5; i++) cout << arr5_1[i] << " ";
    cout << endl;

    cout << "Другий масив (5 елементів): ";
    for(int i = 0; i < 5; i++) cout << arr5_2[i] << " ";
    cout << endl;

    return 0;
}
*/
/*Завдання 5
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int arr1[SIZE] = { 10, 15, 0, -23, 40 };
    int arr2[SIZE] = { 6, 0, -100, 25, -4 };
    int arr3[SIZE];

    for(int i = 0; i < SIZE; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    cout << "Результат: { ";
    for(int i = 0; i < SIZE; i++) {
        cout << arr3[i] << (i < SIZE - 1 ? ", " : " ");
    }
    cout << "}" << endl;

    return 0;
}
*/