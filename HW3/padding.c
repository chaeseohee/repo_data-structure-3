#include <stdio.h>

struct student {
    char lastName[13]; // 13Bytes, 구조체 변수로 만들면 3Byte패딩 -> 총 16Bytes
    int studentId; // 4Bytes
    short grade; // 2Bytes, 구조체 변수로 만들면 2Byte패딩 -> 총 4Bytes
};
int main()
{
    printf("[------- [채서희] [2022041084] -------]\n\n");

    struct student pst; //struct student타입의 변수 pst생성

    printf("size of student = %ld\n", sizeof(struct student)); // struct student 타입의 크기는 24Bytes, 
    printf("size of int = %ld\n", sizeof(int)); //int타입의 크기는 4Bytes
    printf("size of short = %ld\n", sizeof(short)); //short타입의 크기는 2Bytes

    return 0;
}