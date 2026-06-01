#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std; //hello hell! AGAIN AGAIN

int main() {
    double l, w;

    printf("Enter Length: \n");
    cin >> l;

    printf("Enter Width: \n");
    cin >> w;

    if (l <= 0 || w <= 0) {
        printf("Error: Unsupported numbers!");
        return 1;
    }

    double perimeter = 2 * (l + w);
    double area = l * w;
    double diagonal = sqrt(l * l + w * w);

    printf("\nResults:");
    printf("perimeter: %.2f\n", perimeter);
    printf("area: %.2f\n", area);
    printf("diagonal: %.2f\n", diagonal);

    return 0;
}

