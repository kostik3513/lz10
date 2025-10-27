#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;

void vvestyMasiv(int a[], int n, char nazva) {
    cout << "Введіть елементи масиву " << nazva << ": ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int dobutokNeparnyh(int a[], int n) {
    int dob = 1;
    bool ye = false;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            dob *= a[i];
            ye = true;
        }
    }
    if (!ye) return 0;
    return dob;
}

void sortMasiv(int a[], int n) {
    sort(a, a + n);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть кількість елементів у масивах: ";
    cin >> n;

    int A[100], B[100];

    vvestyMasiv(A, n, 'A');
    vvestyMasiv(B, n, 'B');

    cout << "\nДобуток непарних чисел масиву A: " << dobutokNeparnyh(A, n);
    cout << "\nДобуток непарних чисел масиву B: " << dobutokNeparnyh(B, n);

    sortMasiv(A, n);
    sortMasiv(B, n);

    cout << "\n\nВідсортований масив A: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << "\nВідсортований масив B: ";
    for (int i = 0; i < n; i++) cout << B[i] << " ";

    cout << endl;
    return 0;
}
