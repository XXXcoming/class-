#include<iostream>
#include<string>
#include"MyArray.hpp"
using namespace std;

void printIntArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << endl;
	}
}

void test01() {
	MyArray<int> arr1(5);
	for (int i = 0; i < 5; i++) {
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出" << endl;
	printIntArray(arr1);
	cout << "arr1的容量：" << arr1.getCapacity() << endl;
	cout << "arr1的大小：" << arr1.getSize() << endl;
	MyArray<int>arr2(arr1);
	arr2.Pop_back();
	cout << "arr2尾删后：" << endl;
	cout << "arr2的容量：" << arr2.getCapacity() << endl;
	cout << "arr2的大小：" << arr2.getSize() << endl;
}
class person {
public:
	person();
	person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};
void printPerson(MyArray<person>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << "姓名:" << arr[i].m_Name << "年龄：" << arr[i].m_Name << endl;
	}
}

int main() {
	//test01();
	MyArray<person>att(1);
	person p1("sf", 33);
	att.Push_Back(p1);
	printPerson(att);
	
}