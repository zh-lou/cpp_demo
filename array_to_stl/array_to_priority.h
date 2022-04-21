#pragma once
#ifndef ARRAY_TO_PRITORY
#define ARRAY_TO_PRITORY
#include <array>
#include <iostream>
using namespace std;

template <class T>
class priority {
private:
	int Size;      //����Ĵ�С
	int Capacity;    //���������
	T *vec;
	bool cmp(T a, T b);     //�Ƚϴ�С
	void swim(int index);      //�ϸ�
	void sink(int index);
	

public:
	priority();
	priority(int n);
	~priority();

	void push(T val);
	void pop();
	const T& top() const;
	
};



#endif // !ARRAY_TO_PRITORY
