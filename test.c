#include <stdio.h>
#include "variables_of_projects.h"

int main() {
    int a = 5, b = 10;
    int j=10;
    int result = sum(a, j);
    printf("The sum of %d and %d is %d\n", a, b, result);
    return 0;
}