#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

#define MAX_SIZE 100
class Array {
 friend std::ostream& operator<<(std::ostream&, const Array&);
 friend std::istream& operator>>(std::istream&, Array&);
public:
 Array();
 Array(int size);
 Array(const Array&);
 ~Array();
 int getSize() const;
 void setSize(int newSize);
 bool operator==(const Array&) const;
 bool operator!=(const Array&) const;
 int& operator[](int index);
 const int& operator[](int index) const;
 void operator()(int index, int value);
 Array& operator++();
 Array operator++(int);
private:
 int list[MAX_SIZE];
 int size;
};

#endif
