
#include "Array.h"
#include <stdexcept>


Array::Array() : size(0) {
    for (int i = 0; i < MAX_SIZE; ++i) {
        list[i] = 0;
    }
}


Array::Array(int s) {
    if (s < 0 || s > MAX_SIZE) {
        throw std::out_of_range("Size out of bounds");
    }
    size = s;
    for (int i = 0; i < size; ++i) {
        list[i] = 0;
    }
}


Array::Array(const Array& other) : size(other.size) {
    for (int i = 0; i < size; ++i) {
        list[i] = other.list[i];
    }
}


Array::~Array() {

}


int Array::getSize() const {
    return size;
}


void Array::setSize(int newSize) {
    if (newSize < 0 || newSize > MAX_SIZE) {
        throw std::out_of_range("Size out of bounds");
    }
    size = newSize;
}


bool Array::operator==(const Array& other) const {
    if (size != other.size) return false;
    for (int i = 0; i < size; ++i) {
        if (list[i] != other.list[i]) return false;
    }
    return true;
}


bool Array::operator!=(const Array& other) const {
    return !(*this == other);
}


int& Array::operator[](int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return list[index];
}


const int& Array::operator[](int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    return list[index];
}


void Array::operator()(int index, int value) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds");
    }
    list[index] = value;
}


Array& Array::operator++() {
    for (int i = 0; i < size; ++i) {
        ++list[i];
    }
    return *this;
}


Array Array::operator++(int) {
    Array temp(*this);
    ++(*this);
    return temp;
}


std::ostream& operator<<(std::ostream& os, const Array& arr) {
    for (int i = 0; i < arr.size; ++i) {
        os << arr.list[i] << ' ';
    }
    return os;
}


std::istream& operator>>(std::istream& is, Array& arr) {
    for (int i = 0; i < arr.size; ++i) {
        is >> arr.list[i];
    }
    return is;
}
