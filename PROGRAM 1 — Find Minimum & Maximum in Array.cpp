#include <iostream>
using namespace std;

void getExtremes(float a[], int n, float &min, float &max)
{
    min = a[0];
    max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }
}

int main()
{
    float data[] = {12.5, 3.2, 45.0, 11.1, 20.8};
    float minVal, maxVal;

    getExtremes(data, 5, minVal, maxVal);

    cout << "Minimum value = " << minVal << endl;
    cout << "Maximum value = " << maxVal << endl;

    return 0;
}
