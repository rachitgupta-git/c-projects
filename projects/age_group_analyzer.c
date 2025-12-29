#include <stdio.h>
int main() {
    int n, age;
    int child = 0, teen = 0, adult = 0, senior = 0;

    printf("Enter the number of participants: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);

        if (age >= 0 && age <= 12)
            child++;
        else if (age >= 13 && age <= 19)
            teen++;
        else if (age >= 20 && age <= 59)
            adult++;
        else if (age >= 60)
            senior++;
        else
            printf("Invalid age entered!\n");
    }

    printf("\n--- Age Group Analysis ---\n");
    printf("Children (0-12): %d\n", child);
    printf("Teens (13-19): %d\n", teen);
    printf("Adults (20-59): %d\n", adult);
    printf("Seniors (60+): %d\n", senior);

    return 0;
}