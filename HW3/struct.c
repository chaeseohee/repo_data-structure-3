#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main()
{
    printf("[------- [채서희] [2022041084] -------]\n\n");

    struct student1 st1 = { 'A', 100, 'A' }; //struct student1 타입의 변수 st1을 생성, A, 100, A로 초기화

    printf("st1.lastName = %c\n", st1.lastName); //st1의 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); //st1의 studentId 출력
    printf("st1.grade = %c\n", st1.grade); //st1의 grade 출력

    student2 st2 = { 'B', 200, 'B' }; //struct student2 타입의 변수 st2을 생성, B, 200, B로 초기화

    printf("\nst2.lastName = %c\n", st2.lastName); //st2의 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); //st2의 studentId 출력
    printf("st2.grade = %c\n", st2.grade); //st2의 grade 출력

    student2 st3; //struct student2 타입의 변수 st3를 생성

    st3 = st2; //st3에 st2를 대입

    printf("\nst3.lastName = %c\n", st3.lastName); //st3의 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); //st3의 studentId 출력
    printf("st3.grade = %c\n", st3.grade); //st3의 grade 출력

    /* equality test */
    if ((st3.lastName == st2.lastName)&&(st3.studentId==st2.studentId) && (st3.grade == st2.grade)) //c언어에서는 구조체 변수자체를 비교하는 연산이 불가능하다. 따라서 구조체 변수의 요소 하나하나를 비교해서 두 구조체의 동등성을 파악해야한다.
        printf("equal\n"); 
    else
        printf("not equal\n");

    return 0;
}