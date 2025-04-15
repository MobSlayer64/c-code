#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    int date,month,year;
    float salary;
};

int totalEmployees(struct EMPLOYEE employees[], int n) {
    return n;
}

void countGender(struct EMPLOYEE employees[], int n, int *maleCount, int *femaleCount) {
    *maleCount = 0;
    *femaleCount = 0;
    for (int i = 0; i < n; i++) {
        if (employees[i].gender == 'M' || employees[i].gender == 'm') {
            (*maleCount)++;
        } else if (employees[i].gender == 'F' || employees[i].gender == 'f') {
            (*femaleCount)++;
        }
    }
}

void salaryAboveThreshold(struct EMPLOYEE employees[], int n, float threshold) {
    printf("\nEmployees with salary more than %.2f:\n", threshold);
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > threshold) {
            printf("Name: %s, Salary: %.2f\n", employees[i].name, employees[i].salary);
        }
    }
}

void findDesignation(struct EMPLOYEE employees[], int n, const char *designation) {
    printf("\nEmployees with designation \"%s\":\n", designation);
    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].designation, designation) == 0) {
            printf("Name: %s\n", employees[i].name);
        }
    }
}


int main (){

    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Designation: ");
        scanf(" %[^\n]", employees[i].designation);
        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender);
        printf("Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &employees[i].date, &employees[i].month, &employees[i].year);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nTotal number of employees: %d\n", totalEmployees(employees, n));

    int maleCount, femaleCount;
    countGender(employees, n, &maleCount, &femaleCount);
    printf("\nNumber of male employees: %d\n", maleCount);
    printf("Number of female employees: %d\n", femaleCount);

    salaryAboveThreshold(employees, n, 10000.0);
    findDesignation(employees, n, "Asst Manager");
}