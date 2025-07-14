#include <iostream>
#include <stdexcept>
using namespace std;
template<typename T>
class Vector {
    T* data;
    size_t sz;
    size_t cap;

    void resize(size_t new_cap) {
        T* new_data = new T[new_cap];
        for (size_t i = 0; i < sz; ++i)
            new_data[i] = data[i];
        delete[] data;
        data = new_data;
        cap = new_cap;
    }

public:
    Vector() : data(nullptr), sz(0), cap(0) {}

    ~Vector() {
        delete[] data;
    }

    void push_back(const T& value) {
        if (sz == cap)
            resize(cap == 0 ? 1 : cap * 2);
        data[sz++] = value;
    }

    void pop_back() {
        if (sz == 0)
            throw std::out_of_range("Vector is empty");
        --sz;
    }

    T& operator[](size_t index) {
        if (index >= sz)
            throw std::out_of_range("Index out of range");
        return data[index];
    }

    const T& operator[](size_t index) const {
        if (index >= sz)
            throw std::out_of_range("Index out of range");
        return data[index];
    }

    size_t size() const { return sz; }
    size_t capacity() const { return cap; }
    bool empty() const { return sz == 0; }
};
int main()
{
	Vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	for (size_t i = 0; i < vec.size(); ++i) {
		cout << "Element at index " << i << ": " << vec[i] << endl;
	}
	cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << endl;
	vec.pop_back();
	cout << "After pop_back, size: " << vec.size() << endl;
	return 0;
}