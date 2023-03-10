#include <stdio.h>
#include <time.h>

int main() {
    int birth_year, current_year, age;

    printf("Enter your birth year: ");
    scanf("%d", &birth_year);

    time_t now = time(NULL);
    struct tm *current_time = localtime(&now);
    current_year = current_time->tm_year + 1900;

    age = current_year - birth_year;

    printf("Your age is %d years.\n", age);

    return 0;
}
