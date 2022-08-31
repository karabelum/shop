//#pragma once
#include <string>
#include <iostream>

#ifndef GOODS_H
#define GOODS_H

using namespace std;

class Goods{
private:

    string name;   //��������
    string date;    //���� ����������
    int price;       //����
    int amount;   //����������
    int number;   //����� ���������

public:

    //����������� �� ���������
    Goods(){
        name = "";
        date = "";
        price = 0;
        amount = 0;
        number = 0;

    }

    //����������� � �����������
    Goods(string s1, string s2, int p, int a, int n){
        name = s1;
        date = s2;
        price = p;
        amount = a;
        number = n;
    }
};


#endif // GOODS_H