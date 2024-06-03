/*
—оздайте класс Array.  ласс Array - это класс динамического массива.
–азмер массива может быть передан как параметр или заданный с помощью
вызова функции-члена.
 ласс должен позвол€ть заполн€ть массив значени€ми, отображать
содержимое массива, измен€ть размер массива, сортировать массив, определ€ть
минимальное и максимальное значение.
 ласс должен содержать набор конструкторов (конструктор копировани€ об€зательный),
деструктор.
ƒобавить в класс Array конструктор перемещени€
*/
#pragma once
class Array
{
    int* _data = nullptr;
    int _size = 0;

public:
    Array();
    Array(int size);
    ~Array();
    Array(const Array& obj);
    Array(Array&& obj);

    void fillArray();
    void output() const;
    void sortArray();
    int searchMin() const;
    int searchMax() const;
    void addElement(int n);
    void setSize(int n);
};
