#include "Goods.h"
using namespace std;

Goods::Goods(){
        string GetName(){//получить название товара
            return name;
        }
        void SetName(string s){//задать название товара
            name = s;
        }
        string GetDate(){//получить дату оформления
            return date;
        }
        void SetDate(string s){//задать дату оформления
            date = s;
        }
        int GetPrice(){//получить цену товара
            return price;
        }
        void SetPrice(int p){//задать цену товара
            price = p;
        }
        int GetAmount(){//получить количество товара
            return amount;
        }
        void SetAmount(int a){//задать количество товара
            amount = a;
        }
        int GetNumber(){//получить номер накладной
            return number;
        }
        void SetNumber(int n){//задать номер накладной
            number = n;
        }
        string ToStringPrice(){//получить цену товара в виде строки
            string s = "";
            int i;

            for (i = price; i > 9; i /= 10) s += to_string(i % 10);

            s += to_string(i);
            reverse(s.begin(), s.end());
            return s;
        }
        int GetTotalCost(){//получить общую стоимость
            return price * amount;
        }
        int GetCost(int n){//получить стоимость заданного числа товара
            return price * n;
        }
        void AmountIncrease(int n){//количество товара увеличить на заданное число
            amount += n;
        }
        void AmountDecrease(int n){//количество товара уменьшить на заданное число
            amount -= n;
        }

    //ctor
}