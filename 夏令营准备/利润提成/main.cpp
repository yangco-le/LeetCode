#include<bits/stdc++.h>
using namespace std;

int main() {
    double l, s;
    scanf("%lf", &l);

    if(l <= 100000) s = l * 0.1;
    else if (l > 100000 && l <= 200000) s = 10000 + (l - 100000) * 0.075;
    else if (l > 200000 && l <= 400000) s = 17500 + (l - 200000) * 0.05;
    else if (l > 400000 && l <= 600000) s = 27500 + (l - 400000) * 0.03;
    else if (l > 600000 && l <= 1000000) s = 33500 + (l - 600000) * 0.015;
    else if (l > 1000000) s = 39500 + (l - 1000000) * 0.01;

    printf("%g", s);

    return 0;
}
