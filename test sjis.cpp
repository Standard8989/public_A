#include <bits/stdc++.h>
using namespace std;

int main() {
    int select;
    cout << "�����ɓ��Ă͂܂�悤�ɐ���ݒ肷��̂ƁA���ɂ��ċ��߂邩���������Ƃ��΂��Ƃ͑��v" << endl;
    cout << "�_�ɂ��ċ��߂�Ƃ���0���A����ɂ��ċ��߂鎞��1��ݒ�" << flush;
    cin >> select;

    if (select == 0) {
        auto titrationAcid = [](int a, double v, int b, double e, double w) {
            cout << (b * e * w) / (a * v) << endl;
        };

        int a;
        double v;
        int b;
        double e;
        double w;

        cout << "a��ݒ�" << flush;
        cin >> a;
        cout << "v��ݒ� �P�ʂ�ml��" << flush;
        cin >> v;
        cout << "b��ݒ�" << flush;
        cin >> b;
        cout << "c'��ݒ� �P�ʂ�mol/ml��" << flush;
        cin >> e;
        cout << "v'��ݒ� �P�ʂ�ml��" << flush;
        cin >> w;

        titrationAcid(a, v, b, e, w);
    }
    else{
        auto titrationBase = [](int a, double c, double v, int b, double w) {
            cout << (a * c * v) / (b * w) << endl;
        };

        int a;
        double c;
        double v;
        int b;
        double w;

        cout << "a��ݒ�" << flush;
        cin >> a;
        cout << "c��ݒ� �P�ʂ�mol/ml��" << flush;
        cin >> c;
        cout << "v��ݒ� �P�ʂ�ml��" << flush;
        cin >> v;
        cout << "b��ݒ�" << flush;
        cin >> b;
        cout << "v'��ݒ� �P�ʂ�ml��" << flush;
        cin >> w;

        titrationBase(a, c, v, b, w);
    }

    cin.get();
    return 0;
}