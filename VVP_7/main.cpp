//
//  main.cpp
//  VVP_7
//
//  Created by Роберт Скиталинский on 09.12.2021.
//

#include <iostream>
using namespace std;

/*int main(){
    double a,r,pi,c;
    pi = 3.14;
    cout << "Введите 0 < А < 360";
    cin >> a;
    r = a * (pi / 180);
    cout << " " << r;
    return 0;
}

int main(){
    double a,r,pi;
    pi = 3.14;
    cout << "Введите 0 < А < 2 * pi(pi = 3,14)";
    cin >> a;
    r = a * (180 / pi);
    cout << " " << r;
    return 0;
}
*/
int main(){
    int a,x,y,z,l;
    cin >> a;
    cin >> x;
    cin >> y;
    z = x / a;
    l = z * y;
    cout << z << " " << l;
    return 0;
}
/*int main(){
    int v1,v2,s,t,Z,x;
    cin >> v1;
    cin >> v2;
    cin >> t;
    cin >> s;
    x = abs(v2 + v1) * t;
    Z = s + x;
    cout << Z;
}
int main (){
    int a,x,b;
    cin >> a;
    cin >> b;
    x = (0 - b) / a;
    cout << x;
    return 0;
}
int main(){
    double A1, A2, B1, B2, C1, C2, x, y;
    cout << "A1, B1, C1 = ";
    cin >> A1 >> B1 >> C1;
    cout << "A2, B2, C2 = ";
    cin >> A2 >> B2 >> C2;
    y = (C2 * A1 - A2 * C1) / (B2 * A1 - A2 * B1);
    x = (C2 - B2 * y) / A2;
    if (y == -0)
        y = 0;
    if (x == -0)
        x = 0;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
}*/
