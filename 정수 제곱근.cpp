#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
long long solution(long long n) {
    long long answer = 0;
    long long a = sqrt(n);
    if ((a * a) == n)
        answer = (a + 1) * (a + 1);
    else
        answer = -1;
    return answer;
}