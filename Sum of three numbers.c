#include <stdio.h>
int main() {
    int first, second , third, sum=0;
    printf("Enter the three numbers: ");

    scanf("%d %d %d", &first, &second, &third);
    sum=first+second+third;
    printf("Sum of %d+%d+%d is %d",first,second,third,sum);

    return 0;
}
