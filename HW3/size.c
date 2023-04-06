#include<stdio.h>
#include<stdlib.h>

void main()
{
    printf("[------- [채서희] [2022041084] -------]\n\n");

    int** x; //2중 포인터 변수 x를 선언

    printf("sizeof(x) = %lu\n", sizeof(x)); //x는 2중 포인터로 주소를 저장하기 때문에 8Byte의 크기를 가진다
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x는 2중 포인터를 한 번 간접참조하였기 때문에 int형 변수를 가리키는 포인터변수일 것이고 따라서 8Byte의 크기를 가진다
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x는 2중 포인터를 두 번 간접참조하였기 때문에 int형 변수일 것이고 따라서 4Byte의 크기를 가진다
}