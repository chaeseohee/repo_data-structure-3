#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[------- [채서희] [2022041084] -------]\n\n");

    int list[5]; //정수형 배열 생성
    int* plist[5]; //정수형 포인터 배열 생성

    list[0] = 10; //list[0]에 10을 저장
    list[1] = 11; //list[1]에 11을 저장

    plist[0] = (int*)malloc(sizeof(int)); //int크기만큼의 동적메모리 할당하고 주소를 포인터 배열에 저장

    printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력, 저장되어 있던 10이 출력됨
    printf("list \t\t= %p\n", list);  //list의 시작주소 출력(배열의 이름은 배열의 시작주소 포인터상수)
    printf("&list[0] \t= %p\n", &list[0]); //list[0]의 주소 출력, 바로 위에서 출력한 값과 같은 값이 출력됨
    printf("list + 0 \t= %p\n", list + 0); //포인터상수 list에 0을 더한 값 출력, list의 시작주소가 출력됨(따라서 이 값도 바로 위 값과 같다)
    printf("list + 1 \t= %p\n", list + 1); //포인터상수 list에 1 X 4Byte(int형배열이기 때문에)를 더한 주소값이 출력됨
    printf("list + 2 \t= %p\n", list + 2); //포인터상수 list에 2 X 4Byte(int형배열이기 때문에)를 더한 주소값이 출력됨
    printf("list + 3 \t= %p\n", list + 3); //포인터상수 list에 3 X 4Byte(int형배열이기 때문에)를 더한 주소값이 출력됨
    printf("list + 4 \t= %p\n", list + 4); //포인터상수 list에 4 X 4Byte(int형배열이기 때문에)를 더한 주소값이 출력됨
    printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소 출력, 바로 위에서 출력한 값과 같은 값이 출력됨

    free(plist[0]); //malloc으로 할당된 메모리 해제, heap영역의 메모리를 나중에 다시 사용할 수 있게함
}