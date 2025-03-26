#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool filter(int n) {
    if (n <= 1) return false; 
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void finder(int n) {
    if (n <= 1) {
        printf("%d doesnt have any prime factors\n", n);
        return;
    }
    printf("Prime factors of %d are: 1 ", n);
    for (int i = 2; i <= n; i++) {
        if (filter(i) && n % i == 0) {
            printf("%d ", i);
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    printf("\n");
}



int main(){

double a ,b = 1 ;
printf("Enter the number : ");
scanf("%lf",&a);

double A = sqrt(a);
double B = pow(a, 2);
double C = pow(a, 3);

for ( double i = 1; i <= a; i++)
{
    b = i*b;
}


printf("\nsquareroot of the number is %.2lf",A);
printf("\n square of the number is %.2lf",B);
printf("\ncube of the number is %.2lf",C);
printf("\n factorail of the number is %.2lf",b);

int int_a = (int)a;
    if (filter(int_a)) {
        printf("\n%d is a prime number.\n", int_a);
    } else {
        printf("\n%d is not a prime number.\n", int_a);
    }

    finder(int_a);
}