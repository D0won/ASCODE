#include<iostream>
using namespace std;

int main(void)
{
    double km_h, h;
    cin >> km_h >> h;
    printf("%.3lf %.3lf %.2lf\n", km_h, h, km_h*h);
    return 0;
}