//Link for question
// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int and_max = 0, or_max = 0, xor_max = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int current_and = i & j;
            int current_or = i | j;
            int current_xor = i ^ j;

            if (current_and > and_max && current_and < k) {
                and_max = current_and;
            }
            if (current_or > or_max && current_or < k) {
                or_max = current_or;
            }
            if (current_xor > xor_max && current_xor < k) {
                xor_max = current_xor;
            }
        }
    }

    printf("%d\n%d\n%d", and_max, or_max, xor_max);
}

int main() {
    int n, k;

    n = 5;
    k = 4;
    calculate_the_maximum(n, k);

    return 0;
}

