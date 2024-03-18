#include<stdio.h>

void main() {
    int components, configurations, totalConfigurations=1, i;

    scanf("%d", &components);

    for (int i=0; i<components; i++) {
        scanf("%d", &configurations);

        if (configurations == 0) {
            totalConfigurations = 0;
            break;
        }

        totalConfigurations *= configurations;
    }

    printf("%d", totalConfigurations);
}