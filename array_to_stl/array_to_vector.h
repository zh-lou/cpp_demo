#pragma once
#pragma once
#ifndef ARRAY_TO_VECTOR
#define ARRAY_TO_VECTOR
#include <array>
#include <iostream>
using namespace std;

template <class T>
class arrayvector {
private:
	int Size;      //����Ĵ�С
	int Capacity;    //���������
	T *vec;

public:
	arrayvector();
	arrayvector(int n);
	~arrayvector();

	void push_back(T val);
	void pop_back();
	void push_front(T val);

	//const T get_index(const int index) const;    //��ȡλ�õ�ֵ
	const T& operator[](int index) const;
	int size();

};



#endif // !ARRAY_TO_PRITORY
