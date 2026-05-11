#include <iostream>
#include <algorithm>
using namespace std;

float getMean(int a[], int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return sum / n;
}

float getMedian(int a[], int n)
{
    sort(a, a + n);

    if(n % 2 == 0)
        return (a[n/2] + a[n/2 - 1]) / 2.0;
    else
        return a[n/2];
}

int getMode(int a[], int n)
{
    sort(a, a + n);

    int mode = a[0], maxCount = 1, currentCount = 1;

    for(int i = 1; i < n; i++)
    {
        if(a[i] == a[i-1])
            currentCount++;
        else
            currentCount = 1;

        if(currentCount > maxCount)
        {
            maxCount = currentCount;
            mode = a[i];
        }
    }
    return mode;
}

int main()
{
    int data[] = {1, 2, 2, 3, 4, 5, 2};
    int n = 7;

    cout << "Mean = " << getMean(data, n) << endl;
    cout << "Median = " << getMedian(data, n) << endl;
    cout << "Mode = " << getMode(data, n) << endl;

    return 0;
}
