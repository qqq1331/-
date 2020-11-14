#include <bits/stdc++.h> // библиотека, которой пользуюсь еще со школы. (Занимался по Полякову)

using namespace std;

int main() {

int k = 0;
double S = 0;

int a[10];
for (int i = 0; i < 10; i++)
{

 cin >> a[i];

 if (a[i] % 2 != 0 && a[i] != 0)
 {

  k++; S += a[i];

 }

}

S = S / k;

cout << setprecision(2) << fixed;

cout << S;

return 0;

}
