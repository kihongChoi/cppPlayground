#include <iostream>
using namespace std;

int main() {
    int     N = 0;
    float   number, sum = 0.0, sumSquare = 0.0;
    float   mean, variance;

    while ( N < 1 || N > 10) {
        cout    <<  "Number of entries (1-10) = ";
        cin     >>  N;
    }

    for (int i = 1; i <= N; i++) {
        cout    <<  "Input item number " << i << " = ";
        cin     >> number;
        sum = sum + number;
        sumSquare = sumSquare + number*number
    }

    mean = sum/N;
    variance = sumSquare/N - mean*mean;

    cout    <<  "The mean of the data is " << mean << " and the variance is " << variance endl;

    return 0;
}
