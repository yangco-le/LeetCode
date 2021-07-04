#include <iostream>
#include <cmath>
#include<string>

using namespace std;

string str;

int GetNum(int & idx) {
    int res = 0;
    while (str[idx] >= '0' && str[idx] <= '9') {
        res = 10 * res + str[idx] - '0';
        idx++;
    }
    return res;
}

int main()
{
    cin >> str;
    str = "#" + str + "#";

    int index = 0;
    int mode = 0, flag = 0;
    int num = 1;
    int a=0, b=0, c=0;

    while (index < str.size()) {
        if (str[index] >= '0' && str[index] <= '9') {
            num = GetNum(index);
            if (str[index] != 'x') {
                if (flag == 0 && mode == 0 || flag == 1 && mode == 1) c += num;
                else c -= num;
            }
        }
        else if (str[index] == 'x') {
            if (str[index+1] == '^') {
                if (flag == 0 && mode == 0 || flag == 1 && mode == 1) a += num;
                else a -= num;
                index += 3;
            }
            else {
                if (flag == 0 && mode == 0 || flag == 1 && mode == 1) b += num;
                else b -= num;
                index++;
            }
        }
        else if (str[index] == '+') {
            flag = 0;
            num = 1;
            index++;
        }
        else if (str[index] == '-') {
            flag = 1;
            num = 1;
            index++;
        }
        else if (str[index] == '=') {
            flag = 0;
            mode = 1;
            index++;
        }
        else index++;
    }

    double delta = b*b - 4*a*c;

    if (delta < 0) {
        cout << "No Solution" << endl;
    }
    else {
        double x1 = (-b-sqrt(delta))/(2*a);
        double x2 = (-b+sqrt(delta))/(2*a);
        if (x1 < x2) printf("%.2f %.2f\n", x1, x2);
        else printf("%.2f %.2f\n", x2, x1);
    }


    return 0;
}
