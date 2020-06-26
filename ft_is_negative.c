#include <stdio.h>

void ft_is_negative(int n);

int main() 

{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("N");
    } else
        printf("P");
    return 0;
}
