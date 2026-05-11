#include <iostream>
#include <cmath>
using namespace std;

double stdev(double x[], int n)
{
    double sum = 0, mean, varianceSum = 0;

    for(int i = 0; i < n; i++)
        sum += x[i];

    mean = sum / n;

    for(int i = 0; i < n; i++)
        varianceSum += pow(x[i] - mean, 2);

    return sqrt(varianceSum / (n - 1));
}

int main()
{
    double data[] = {10, 12, 23, 23, 16, 23, 21, 16};
    int n = 8;

    cout << "Standard Deviation = " << stdev(data, n);

    return 0;
}
