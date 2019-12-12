#include<vector>
#include<iostream>

using namespace std;

template<typename T>
int binsearch(const vector<T> &v, int first, int last, const T &target) {
	int orilast = last;
	while (first < last) {
		int mid = (first + last) / 2;
		if (v[mid] == target) { return mid; }
		else if (v[mid] < target) { first = mid + 1; return binsearch(v, first, last, target); }
		else if (v[mid] > target) { last = mid; return binsearch(v, first, last, target); }
	}
	return orilast;  //未找到目标则返回原来的last值
}

int main() {
	int a[] = { 1,3,4,6,15,16,27 };
	vector<int> v(a, a + 7);
	cout << "target is in the positin " << binsearch(v, 0, v.size(), 30) << endl;
	system("pause");
	return 1;
}
