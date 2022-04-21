#include "array_to_vector.cpp"
#include"array_to_priority.cpp"
#include<iostream>
using namespace std;



int main() {
	//arrayvector<int> vec(4);
	//vec.push_back(1);
	//vec.push_back(2);
	//vec.push_back(3);
	//cout << vec[1] << endl;
	//cout << vec.size() << endl;
	//vec.push_back(4);
	//vec.push_back(5);
	//vec.push_front(6);
	//cout << vec.size() << ' ' << vec[0] << endl;
	int n;
	cin >> n;
	priority<int> vec(n);
	while (n--) {
		int temp;
		cin >> temp;
		vec.push(temp);
		cout << vec.top() << endl;
	}


	system("pause");
	return 0;
}