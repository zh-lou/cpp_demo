#include"array_to_priority.h"


template<class T>
bool priority<T>::cmp(T a, T b) {
	return a > b;
}

template<class T>
void priority<T>::swim(int index) {
	while (index > 1 && cmp(vec[index], vec[index >> 1])) {
		swap(vec[index], vec[index >> 1]);
		index >>= 1;
	}
}

template<class T>
void priority<T>::sink(int index) {
	while (index * 2 <= Size) {
		int k = 2 * index;
		if (k < Size && cmp(vec[k + 1], vec[k])) {         //ѡ�����ӻ����Һ���
			k++;
		}
		if (cmp(vec[k], vec[index])) {                 //���vec[n] С�³�
			swap(vec[index], vec[k]);
			index = k;
		}
		else {
			break;
		}
	}
}


template<class T>
priority<T>::priority():Capacity(0) {
	vec = new T[1];
	Size = 0;
}

template<class T>
priority<T>::priority(int n):Capacity(n) {
	vec = new T[n + 1];            //��0λ����
	Size = 0;
}

template<class T>
priority<T>::~priority() {
	delete[]vec;
}

template<class T>
void priority<T>::push(T val) {
	if (Size >= Capacity) {
		T* temp = new T[Capacity << 1];
		for (int i = 1; i <= Capacity; i++) {
			temp[i] = vec[i];
		}
		delete[]vec;
		vec = temp;
		Capacity <<= 1;
	}
	Size++;
	vec[Size] = val;
	//�ϸ�
	swim(Size);
}

template<class T>
void priority<T>::pop() {
	int temp = vec[1];
	swap(vec[1], vec[Size--]);      //������һλ�����һλ
	sink(1);               //��Ԫ���³�
}

template<class T>
const T& priority<T>::top() const {
	return vec[1];
}