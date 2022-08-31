//#pragma once
#include <string>
#include <iostream>

#ifndef GOODS_H
#define GOODS_H

using namespace std;

class Goods{
private:

    string name;   //название
    string date;    //дата оформления
    int price;       //цена
    int amount;   //количество
    int number;   //номер накладной

public:

    //конструктор по умолчанию
    Goods(){
        name = "";
        date = "";
        price = 0;
        amount = 0;
        number = 0;

    }

    //конструктор с параметрами
    Goods(string s1, string s2, int p, int a, int n){
        name = s1;
        date = s2;
        price = p;
        amount = a;
        number = n;
    }
};


#endif // GOODS_H