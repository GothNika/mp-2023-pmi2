#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int a[5], duplicate_flags[5] = { 0, 0, 0, 0, 0 };
    int i, j, duplicates_found = 0;

    for (i = 0; i < 5; i++) {
        scanf_s("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] == a[j]) {
                duplicate_flags[i] = 1;
                duplicate_flags[j] = 1;
            }
        }
    }

    printf("Найденные дубликаты: ");
    for (i = 0; i < 5; i++) {
        if (duplicate_flags[i] == 1) {
            printf("%d ", a[i]);
            duplicates_found = 1;
        }
    }

    if (duplicates_found == 0) {
        printf("Одинаковых элементов не обнаружено");
    }

    return 0;
}
