#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class MyCar {
private:
    //�������
    int fuel = 0;
    bool power = false;

public:
    //�޼ҵ�
    void go() {
        this->fuel--;
    }

    void oiling(int n) {
        this->fuel += n;
    }

    void fuel_check() {
        cout << "���� : " << fuel << endl;
    }
};

int main(){


MyCar car = MyCar(); //����

//�޼��� ȣ��
car.oiling(100);
car.fuel_check();
for (int i = 0; i < 10; i++) car.go();
car.fuel_check();
car.oiling(100);
for (int i = 0; i < 10; i++) car.go();
car.fuel_check();
}
