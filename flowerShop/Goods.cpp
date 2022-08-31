#include "Goods.h"
using namespace std;

Goods::Goods(){
        string GetName(){//�������� �������� ������
            return name;
        }
        void SetName(string s){//������ �������� ������
            name = s;
        }
        string GetDate(){//�������� ���� ����������
            return date;
        }
        void SetDate(string s){//������ ���� ����������
            date = s;
        }
        int GetPrice(){//�������� ���� ������
            return price;
        }
        void SetPrice(int p){//������ ���� ������
            price = p;
        }
        int GetAmount(){//�������� ���������� ������
            return amount;
        }
        void SetAmount(int a){//������ ���������� ������
            amount = a;
        }
        int GetNumber(){//�������� ����� ���������
            return number;
        }
        void SetNumber(int n){//������ ����� ���������
            number = n;
        }
        string ToStringPrice(){//�������� ���� ������ � ���� ������
            string s = "";
            int i;

            for (i = price; i > 9; i /= 10) s += to_string(i % 10);

            s += to_string(i);
            reverse(s.begin(), s.end());
            return s;
        }
        int GetTotalCost(){//�������� ����� ���������
            return price * amount;
        }
        int GetCost(int n){//�������� ��������� ��������� ����� ������
            return price * n;
        }
        void AmountIncrease(int n){//���������� ������ ��������� �� �������� �����
            amount += n;
        }
        void AmountDecrease(int n){//���������� ������ ��������� �� �������� �����
            amount -= n;
        }

    //ctor
}