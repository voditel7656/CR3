//������ ���������
#include<iostream>
#include <ctime>
using namespace std;
int main() {
setlocale(LC_ALL, "Russian");
const int n = 10;
int arr[n];
srand(time(0));
for (int i = 0; i < n; i++) { arr[i] = rand() % 21 - 10; }
for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
cout << endl;
int sum = 0;
for (int i = 0; i < n; i++) {
if (arr[i] % 2 == 0) { sum = sum + arr[i]; }}
cout << sum << endl;}
