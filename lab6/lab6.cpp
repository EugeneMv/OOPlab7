
#include "stdafx.h"
#include "ListFunk.h"
#include <iostream>

using namespace std;

void main(){
	setlocale (LC_CTYPE, "Russian");
cout << "������� ������ ������ ls1 � ������� ������������ ��������" << endl;
	List<int> ls1;
	ls1.add(6);
	ls1.add(5);
	ls1.add(3);
cout << "������ 1: " << endl; 
ls1.show();
cout << "����������� ������� - " << minElem(ls1);
cout << endl  << "\n������� ������ ������ ls2 � ������� ������������ ��������" << endl;
	List<double> ls2;
	ls2.add(7.7);
	ls2.add(8.4);
cout << "������ 2: " << endl; 
ls2.show();
cout << "����������� ������� - " << minElem(ls2);
cout << "\n";

// ������� 2 ������� ������ Towar
Towar tw1;
tw1.setCost(5);
Towar tw2;
tw2.setCost(9);

// ������ ������ List ���� float
List<float> ls3;
addT(ls3,tw1);
addT(ls3, tw2);
cout << "\n������ 3: " << endl;
ls3.show();
cout << "����������� ������� - " << minElem(ls3);
cout << "\n\n";
}
