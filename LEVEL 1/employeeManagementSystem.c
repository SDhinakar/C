#include<stdio.h>

int main() {
    int experience = 0, performance_metric = 0;
    scanf("%d%d", &experience, &performance_metric);

    char defaultstr[30] = "level employee.\n";

    if (experience <= 0 || experience > 10) {
        printf("Invalid input!");
        return 0;
    }

    if (experience < 3) {
        printf("Junior %s", defaultstr);
        if (performance_metric > 7) {
            printf("Promotion to Intermediate level possible.\n");
        }
    } else if (experience >= 3 && experience <= 7) {
        printf("Intermediate %s", defaultstr);
        if (performance_metric > 8) {
            printf("Promotion to Senior level possible.\n");
        }
    } else if (experience > 7) {
        printf("Senior %s", defaultstr);
    }

    return 0;
}
