// Int ("%d"): 32 Bit integer
// Long ("%ld"): 64 bit integer
// Char ("%c"): Character type
// Float ("%f"): 32 bit real value
// Double ("%lf"): 64 bit real value
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a;
    long b;
    char ch;
    float d;
    double e;
    scanf("%d %ld %c %f %lf",&a, &b, &ch, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf", a, b, ch, d, e);
    return 0;
}
