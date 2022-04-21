#pragma once
#ifndef ARRAY_TO_PRITORY
#define ARRAY_TO_PRITORY
#include <array>
#include <iostream>
using namespace std;

template <class T>
class priority {
private:
	int Size;      //数组的大小
	int Capacity;    //数组的容量
	T *vec;
	bool cmp(T a, T b);     //比较大小
	void swim(int index);      //上浮
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
