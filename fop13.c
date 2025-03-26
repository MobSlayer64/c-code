#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool palindrome(char st[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (tolower(st[i]) != tolower(st[n - i - 1])) {
            return false;
        }
    }
    return true;
}

int main() {
    char op;
do{
    char st[100], sd[100];
    printf("\nEnter the first word: ");
    scanf("%s", st);

    int m = 0;
    while (st[m] != '\0') {
        m++;
    }

    char cate; 
    printf("\nAvailable operations");
    printf("\n1. To find the length of the word (L)");
    printf("\n2. Check if the word is a palindrome (P)");
    printf("\n3. Reverse the word (R)");
    printf("\n4. Check the equality of two words (E)");
    printf("\n5. Check for substring (S)");
    printf("\nEnter your choice: ");
    scanf(" %c", &cate); 
    cate = toupper(cate); 

    switch (cate) {
        case 'L':
            printf("\nLength of the word is: %d\n", m);
            break;

        case 'R':
            printf("\nReverse of the word is: ");
            for (int i = m - 1; i >= 0; i--) {
                printf("%c", st[i]);
            }
            printf("\n");
            break;

        case 'P':
            if (palindrome(st, m) == true) {
                printf("\nIt is a palindrome\n");
            } else {
                printf("\nIt is not a palindrome\n");
            }
            break;

        case 'E':
            printf("\nEnter the second word: ");
            scanf("%s", sd);

            int n = 0;
            while (sd[n] != '\0') {
                n++;
            }

            int comparison = 0;
            for (int i = 0; i < m && i < n; i++) {
                if (st[i] != sd[i]) {
                    comparison = (st[i] > sd[i]) ? 1 : -1;
                    break;
                }
            }
           
            if (comparison == 0) {
                printf("\nThe words are equal\n");
            } else if (comparison > 0) {
                printf("\nThe first word is greater\n");
            } else {
                printf("\nThe second word is greater\n");
            }
            break;

         case 'S':
            printf("\nEnter the substring: ");
            char sub[100];
            scanf("%s", sub);
            int k = 0;
            while (sub[k] != '\0') {
                k++;
            }
            if(k > m){
                printf("\nSubstring is greater than the word\n");
            }else{
                int flag = 0;
        for (int i = 0; i <= m - k; i++) {
            if (st[i] == sub[0]) {
                int match = 1;
                for (int j = 1; j < k; j++) {
                    if (st[i + j] != sub[j]) {
                        match = 0;
                        break;
                    }
                }
                if (match == 1) {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag) {
            printf("\nThe substring exists in the word\n");
        } else {
            printf("\nThe substring does not exist in the word\n");
        }
     }   
            break;
        
        default:
            printf("\nInvalid input\n");
            break;
    }
    printf("\nDo you want to continue? (Y/N): ");
    scanf(" %c", &op);
    op = toupper(op);
}while(op == 'Y');
    return 0;
}