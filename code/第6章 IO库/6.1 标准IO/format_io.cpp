#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << "������";
    cout << boolalpha << true << " " << false << endl;
    cout << "------------------------------" << endl;
    
    cout << "ʮ���ƣ�";
    cout << dec << 20 << " " << 1024 << endl;
    
    cout << "ʮ�����ƣ�";
    cout << showbase << hex << 20 << " " << 1024 << noshowbase << endl;
    
    cout << "�˽��ƣ�";
    cout << oct << 20 << " " << 1024 << dec << endl;
    cout << "------------------------------" << endl;
    
    cout << "��ѧ��������";
    cout << scientific << 100 * sqrt(2) << defaultfloat << endl;
    cout << "------------------------------" << endl;
    
    cout << "Ĭ�������������";
    cout << 10.0 << endl;
    
    cout << "��������ӡС���㣺";
    cout << showpoint << 10.0 << noshowpoint << endl;
    cout << "------------------------------" << endl;
    
    cout << "���ȣ�";
    cout << setprecision(3) << fixed << sqrt(2) << endl;
    cout << "------------------------------" << endl;
    
    cout << "�����䣺";
    cout << setfill('0') << setw(4) << 2021 << "/"
         << setw(2) << 9 << "/"
         << setw(2) << 2 << endl;
    return 0;
}