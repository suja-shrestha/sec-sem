#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], age[100], i, n;
    long int phone[100];
    char name[100][20], address[100][20];
    char keyword[] = "kathmandu";
    FILE *fp;

    fp = fopen("student.txt", "r");
    printf("Enter how many records you want to see of Kathmandu: ");
    scanf("%d", &n);
    printf("The records are:\n");
    for (i = 0; i <= n; i++) {
        fscanf(fp, "%d %d %s %s %li", &roll[i], &age[i], name[i], address[i], &phone[i]);
        if (strcmpi(address[i], keyword) == 0) {
            printf("%d %d %s %s %li\n", roll[i], age[i], name[i], address[i], phone[i]);
        }
    }

    fclose(fp);
    return 0;
}

