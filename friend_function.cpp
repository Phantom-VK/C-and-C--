#include<iostream>
using namespace std;

class Sample;
float findMean(const Sample&);

class Sample {

float x, y;
public:
    Sample(float a, float b) : x(a), y(b) {}

    
    friend float findMean(const Sample&);
};


float findMean(const Sample& s) {
    return (s.x + s.y) / 2.0f;
}

int main() {
    float a, b;
    cout << "Enter the value of x: ";
    cin >> a;
    cout << "Enter the value of y: ";
    cin >> b;

    Sample sampleObj(a, b);

    
    float mean = findMean(sampleObj);

    cout << "Mean value of x and y is: " << mean << endl;

    return 0;
}
