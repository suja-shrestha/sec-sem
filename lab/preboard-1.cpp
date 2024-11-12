#include <stdio.h>

int main() {
    char name[1000][1000];
    int id, choice, salary, n, i;
    FILE *fp;
    FILE *fo;

    printf("Enter 1 if you want to write and 2 if you want to read: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            fp = fopen("file.txt", "w");
            if (fp == NULL) {
                printf("Error opening file for writing!\n");
                return 1;
            }

            printf("Enter how many records you want to record: ");
            scanf("%d", &n);

            printf("Enter the name, id, and salary:\n");
            for (i = 0; i < n; i++) {
                scanf("%s %d %d", name[i], &id, &salary);
                fprintf(fp, "%s %d %d\n", name[i], id, salary);
            }
            fclose(fp);
            break;

        case 2:
            fo = fopen("file.txt", "r");
            if (fo == NULL) {
                printf("Error opening file for reading!\n");
                return 1;
            }

            printf("Enter how many records you want to see: ");
            scanf("%d", &n);

            printf("Records are:\n");
            for (i = 0; i < n; i++) {
                fscanf(fo, "%s %d %d", name[i], &id, &salary);
                printf("%s %d %d\n", name[i], id, salary);
            }
            fclose(fo);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}
