#include <stdio.h>

void print_one(int* ptr, int rows);

int main()
{
    printf("[------- [채서희] [2022041084] -------]\n\n");

    int one[] = { 0, 1, 2, 3, 4 }; //크기 5의 0,1,2,3,4가 들어있는 int형 배열 one을 선언

    printf("one = %p\n", one); //one배열의 시작주소 출력(배열의 이름은 포인터 상수로 그 배열의 시작주소)
    printf("&one = %p\n", &one); //one의 주소 출력, one을 출력했을 때와 같은 값이 출력됨
    printf("&one[0] = %p\n", &one[0]); //one[0]의 주소 출력, 마찬가지로 one의 시작주소가 출력됨 
    printf("\n");

    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5); //print_one()에 &one[0]로 주소 전달, one으로 주소를 전달한 것과 다를 바 없다

    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5); //print_one()에 one으로 주소 전달, &one[0]로 주소를 전달한 것과 다를 바 없다

    return 0;
}
void print_one(int* ptr, int rows)
{
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));
    printf("\n");
}