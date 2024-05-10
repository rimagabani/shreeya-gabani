#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int chemMarks;
    int mathsMarks;
    int phyMarks;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &students[i].rollNo);
        printf("Name => ");
        scanf("%s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chemMarks);
        printf("Mathematics => ");
        scanf("%d", &students[i].mathsMarks);
        printf("Physics => ");
        scanf("%d", &students[i].phyMarks);
    }

    for (i = 0; i < 5; i++) {
        printf("\n%s (%d)\n", students[i].name, students[i].rollNo);
        printf("Chemistry => %d\n", students[i].chemMarks);
        printf("Mathematics => %d\n", students[i].mathsMarks);
        printf("Physics => %d\n", students[i].phyMarks);
        int totalMarks = students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks;
        printf("Total => %d/300\n", totalMarks);
        float percentage = (float)totalMarks / 300 * 100;
        printf("Percent => %.2f%%\n", percentage);
    }

    return 0;
}

