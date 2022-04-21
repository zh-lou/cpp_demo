#include"array_to_vector.h"

template<class T>
arrayvector<T>::arrayvector() {
	vec = new T[0];
	Size = 0;
	Capacity = 0;
}

template<class T>
arrayvector<T>::arrayvector(int n):Capacity(n) {
	vec = new T[n];
	Size = 0;
}

template<class T>
arrayvector<T>::~arrayvector() {
	delete[]vec;
}

template<class T>
const T& arrayvector<T>::operator[](int index) const { 
	return vec[index]; 
}

template<class T>
void arrayvector<T>::push_back(T val) {
	if (Size >= Capacity) {
		T *temp = new T[Capacity << 1];
		for (int i = 0; i <= Capacity; i++) {
			temp[i] = vec[i];
		}
		delete[]vec;
		vec = temp;
		Capacity <<= 1;    //开辟新的空间
	}

	vec[Size] = val;
	Size++;
}

template<class T>
void arrayvector<T>::push_front(T val) {
	if (Size >= Capacity) {
		T *temp = new T[Capacity << 1];
		for (int i = 0; i <= Capacity; i++) {
			temp[i] = vec[i];
		}
		delete[]vec;
		vec = temp;
		Capacity <<= 1;    //开辟新的空间
	}

	for (int i = Size; i > 0; i--) {
		vec[i] = vec[i - 1];
	}
	vec[0] = val;
	//vec[Size] = val;
	Size++;
}

template<class T>
void arrayvector<T>::pop_back() {
	vec[Size--] = 0;
}

template<class T>
int arrayvector<T>::size() {
	return Size;
}