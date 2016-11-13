#pragma once
#include <iostream>

template <class T>
class List{
	public:
	List<T>* head;
	T element;
	List<T>* next;

	List(){head = NULL;}

	void add(T v);
	void show();
	bool IsEmpty();
	void operator --();	 
	void operator +(List<T> &);
	bool operator ==(List<T> &);
};

class Towar
{
float cost;
public:
	void setCost(float cost){
		this->cost = cost;
	};
	float getCost(){
		return this->cost;
	};
};
