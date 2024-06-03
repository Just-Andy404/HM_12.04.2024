/*
�������� ����� Array. ����� Array - ��� ����� ������������� �������.
������ ������� ����� ���� ������� ��� �������� ��� �������� � �������
������ �������-�����.
����� ������ ��������� ��������� ������ ����������, ����������
���������� �������, �������� ������ �������, ����������� ������, ����������
����������� � ������������ ��������.
����� ������ ��������� ����� ������������� (����������� ����������� ������������),
����������.
�������� � ����� Array ����������� �����������
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
