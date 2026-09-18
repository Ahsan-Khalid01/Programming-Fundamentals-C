#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        	printf("=====================\n\n");
            printf("Lower case vowel\n\n");
            	printf("=====================\n\n");
        } else {
        		printf("=====================\n\n");
            printf("Lower case consonant\n\n");
            	printf("=====================\n\n");
        }
    }
    else if (ch >= 'A' && ch <= 'Z') {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        		printf("=====================\n\n");
            printf("Upper case vowel\n\n");
            	printf("=====================\n\n");
        } else {
        		printf("=====================\n\n");
            printf("Upper case consonant\n\n");
            	printf("=====================\n\n");
        }
    }
    else {
    		printf("============================\n\n");
        printf("Not an alphabet character\n\n");
        printf("============================\n\n");
    }

    return 0;
}
