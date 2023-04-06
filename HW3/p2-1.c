#include <stdio.h>

#define MAX_SIZE 100

float sum1(float list[], int);
float sum2(float* list, int);
float sum3(int n, float* list);

float input[MAX_SIZE], answer; //float형 전역변수 input, answer 생성
int i; //int형 전역변수 i 생성

void main(void)
{
    printf("[------- [채서희] [2022041084] -------]\n\n");

    for (i = 0; i < MAX_SIZE; i++)
        input[i] = i; //input배열의 모든 원소 값에 그 인덱스 값을 저장

    /* for checking call by reference */
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n"); 
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //메인함수에서 input배열의 시작주소 출력(배열의 이름은 포인터 상수로 그 배열의 시작주소)

    answer = sum1(input, MAX_SIZE); //answer에 sum1(input, MAX_SIZE)을 실행시킨 값을 저장 
    printf("The sum is: %f\n\n", answer); //0~99까지의 합이 출력됨(:4950)

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //메인함수에서 input배열의 시작주소 출력(배열의 이름은 포인터 상수로 그 배열의 시작주소)

    answer = sum2(input, MAX_SIZE); //answer에 sum2(input, MAX_SIZE)을 실행시킨 값을 저장 
    printf("The sum is: %f\n\n", answer); //0~99까지의 합이 출력됨(:4950)

    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n"); 
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); //메인함수에서 input배열의 시작주소 출력(배열의 이름은 포인터 상수로 그 배열의 시작주소)

    answer = sum3(MAX_SIZE, input); //answer에 sum3(MAX_SIZE, input)을 실행시킨 값을 저장 
    printf("The sum is: %f\n\n", answer); //0~99까지의 합이 출력됨(:4950)
}

float sum1(float list[], int n)
{
    printf("list\t= %p\n", list); //list의 값 출력, main에서 input을 넣었기 때문에 input의 시작주소가 출력됨 
    printf("&list\t= %p\n\n", &list); //매개변수 list의 주소를 출력
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += list[i]; //tempsum변수에 list의 모든 원소 값을 더한 값을 저장
    return tempsum; //tempsum 리턴
}

float sum2(float* list, int n) 
{
    printf("list\t= %p\n", list); //list의 값 출력, main에서 input을 넣었기 때문에 input의 시작주소가 출력됨 
    printf("&list\t= %p\n\n", &list); //매개변수 list의 주소를 출력
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += *(list + i); //tempsum변수에 list의 모든 원소 값을 더한 값을 저장
    return tempsum; //tempsum 리턴
}

/* stack variable reuse test */
float sum3(int n, float* list) //sum1(), sum2()와는 다른 순서로 매개변수 선언 
{
    printf("list\t= %p\n", list); //list의 값 출력, main에서 input을 넣었기 때문에 input의 시작주소가 출력됨
    printf("&list\t= %p\n\n", &list); //매개변수 list의 주소를 출력, sum1(), sum2()와 달리 다른 값이 출력되는데, 매개변수 선언 순서가 달랐기 때문
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += *(list + i); //tempsum변수에 list의 모든 원소 값을 더한 값을 저장
    return tempsum; //tempsum 리턴
}