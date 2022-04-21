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
	int Size;      //数组的大小
	int Capacity;    //数组的容量
	T *vec;

public:
	arrayvector();
	arrayvector(int n);
	~arrayvector();

	void push_back(T val);
	void pop_back();
	void push_front(T val);

	//const T get_index(const int index) const;    //获取位置的值
	const T& operator[](int index) const;
	int size();

};



#endif // !ARRAY_TO_PRITORY
