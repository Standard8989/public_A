#include <bits/stdc++.h>
using namespace std;

int main() {
    int select;
    cout << "公式に当てはまるように数を設定するのと、何について求めるかだけちゃんとやればあとは大丈夫" << endl;
    cout << "酸について求めるときは0を、塩基について求める時は1を設定" << flush;
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

        cout << "aを設定" << flush;
        cin >> a;
        cout << "vを設定 単位はmlで" << flush;
        cin >> v;
        cout << "bを設定" << flush;
        cin >> b;
        cout << "c'を設定 単位はmol/mlで" << flush;
        cin >> e;
        cout << "v'を設定 単位はmlで" << flush;
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

        cout << "aを設定" << flush;
        cin >> a;
        cout << "cを設定 単位はmol/mlで" << flush;
        cin >> c;
        cout << "vを設定 単位はmlで" << flush;
        cin >> v;
        cout << "bを設定" << flush;
        cin >> b;
        cout << "v'を設定 単位はmlで" << flush;
        cin >> w;

        titrationBase(a, c, v, b, w);
    }

    cin.get();
    return 0;
}