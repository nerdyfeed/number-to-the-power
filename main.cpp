#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL,"rus");
int a, n, b;
cout << " Ввведите число: ";
cin >> a;
cout << " Введите степень числа: ";
cin >> n;
for (b=1; n > 0; n--)
b*=a;
cout << " Число в степени: " << b << endl;
system("pause");
return 0;
}