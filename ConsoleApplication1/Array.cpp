#include <iostream>
#include "Array.h"
using namespace std;

Array::Array() : _data(nullptr), _size(0) {}

Array::Array(int size) : _size(size) {
    _data = new int[_size];
}

Array::~Array() {
    delete[] _data;
}

Array::Array(const Array& obj) : _size(obj._size) {
    _data = new int[_size];
    for (int i = 0; i < _size; i++) {
        _data[i] = obj._data[i];
    }
}

Array::Array(Array&& obj) : _data(obj._data), _size(obj._size) {
    obj._data = nullptr;
    obj._size = 0;
}

void Array::fillArray() {
    for (int i = 0; i < _size; i++) {
        cout << "Enter data of element " << i << ": ";
        cin >> _data[i];
    }
}

void Array::output() const {
    if (_data != nullptr) {
        for (int i = 0; i < _size; i++) {
            cout << i << ": data " << _data[i] << endl;
        }
    }
    else {
        cout << "Array is empty" << endl;
    }
}

void Array::sortArray() {
    for (int i = 0; i < _size - 1; i++) {
        for (int j = 0; j < _size - i - 1; j++) {
            if (_data[j] > _data[j + 1]) {
                int temp = _data[j];
                _data[j] = _data[j + 1];
                _data[j + 1] = temp;
            }
        }
    }
}

int Array::searchMin() const {
    int minVal = _data[0];
    for (int i = 1; i < _size; i++) {
        if (minVal > _data[i]) {
            minVal = _data[i];
        }
    }
    return minVal;
}

int Array::searchMax() const {
    int maxVal = _data[0];
    for (int i = 1; i < _size; i++) {
        if (maxVal < _data[i]) {
            maxVal = _data[i];
        }
    }
    return maxVal;
}

void Array::addElement(int n) {
    int* newData = new int[_size + 1];
    for (int i = 0; i < _size; i++) {
        newData[i] = _data[i];
    }
    newData[_size] = n;
    delete[] _data;
    _data = newData;
    _size++;
}

void Array::setSize(int size) {
    if (size > 0) {
        delete[] _data;
        _size = size;
        _data = new int[_size];
    }
    else {
        cout << "Size must be greater than 0" << endl;
    }
}
