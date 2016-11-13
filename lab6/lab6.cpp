
#include "stdafx.h"
#include "ListFunk.h"
#include <iostream>

using namespace std;

void main(){
	setlocale (LC_CTYPE, "Russian");
cout << "Создаем первый список ls1 и довляем произвольные элементы" << endl;
	List<int> ls1;
	ls1.add(6);
	ls1.add(5);
	ls1.add(3);
cout << "Список 1: " << endl; 
ls1.show();
cout << "минимальный элемент - " << minElem(ls1);
cout << endl  << "\nСоздаем второй список ls2 и довляем произвольные элементы" << endl;
	List<double> ls2;
	ls2.add(7.7);
	ls2.add(8.4);
cout << "Список 2: " << endl; 
ls2.show();
cout << "минимальный элемент - " << minElem(ls2);
cout << "\n";

// создаем 2 объекта класса Towar
Towar tw1;
tw1.setCost(5);
Towar tw2;
tw2.setCost(9);

// объект класса List типа float
List<float> ls3;
addT(ls3,tw1);
addT(ls3, tw2);
cout << "\nСписок 3: " << endl;
ls3.show();
cout << "минимальный элемент - " << minElem(ls3);
cout << "\n\n";
}
