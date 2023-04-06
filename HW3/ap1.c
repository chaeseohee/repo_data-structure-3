#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[------- [채서희] [2022041084] -------]\n\n");

    int list[5]; //정수형 배열 생성
    int* plist[5] = { NULL, }; //정수형 포인터 배열 생성, NULL값으로 초기화

    plist[0] = (int*)malloc(sizeof(int)); //int크기만큼의 동적메모리 할당하고 주소를 포인터 배열에 저장

    list[0] = 1; //list[0]에 1을 저장
    list[1] = 100; //list[1]에 100을 저장

    *plist[0] = 200; //plist[0]이 가리키는 주소에 200저장

    printf("list[0]       =%d\n", list[0]); //list[0]의 값 출력, 저장되어 있던 1이 출력됨
    printf("&list[0]      =%p\n", &list[0]); //list[0]의 주소 출력
    printf("list          =%p\n", list); //list의 시작주소 출력(배열의 이름은 배열의 시작주소 포인터상수)
    printf("&list         =%p\n", &list); //list의 주소 출력, list를 출력했을 때와 같은 값이 출력됨

    printf("[-------------------------------------]\n\n");
    printf("list[1]       =%d\n", list[1]); //list[1]의 값 출력, 저장되어 있던 100이 출력됨
    printf("&list[1]      =%p\n", &list[1]); //list[1]의 주소 출력, 위에서 출력한 &list[0]보다 4만큼 큰 값이 출력됨(int형배열이기 때문에)
    printf("*(list+1)     =%d\n", *(list + 1)); //배열을 포인터 형식으로 접근, list[1]과 같은 값이 출력됨
    printf("list+1        =%p\n", list + 1); //포인터상수 list에 1 X 4Byte(int형배열이기 때문에)를 더한 주소값이 출력됨, 그 값은 &list[1]과 같음 

    printf("[-------------------------------------]\n\n");
    printf("*plist[0]     =%d\n", *plist[0]); //plist[0]가 가리키는 주소에 들어있는 값이 출력, 저장되어 있던 200이 출력됨
    printf("&plist[0]     =%p\n", &plist[0]); //plist[0]의 주소가 출력됨
    printf("&plist        =%p\n", &plist); //plist의 주소 출력
    printf("plist         =%p\n", plist); //plist의 시작주소 출력(배열의 이름은 배열의 시작주소 포인터상수)
    printf("plist[1]      =%p\n", plist[1]); //plist[1]에 들어있는 값이 출력, NULL로 초기화했기 때문에 0이 출력됨
    printf("plist[2]      =%p\n", plist[2]); //plist[2]에 들어있는 값이 출력, NULL로 초기화했기 때문에 0이 출력됨
    printf("plist[3]      =%p\n", plist[3]); //plist[3]에 들어있는 값이 출력, NULL로 초기화했기 때문에 0이 출력됨
    printf("plist[4]      =%p\n", plist[4]); //plist[4]에 들어있는 값이 출력, NULL로 초기화했기 때문에 0이 출력됨

    free(plist[0]); //malloc으로 할당된 메모리 해제, heap영역의 메모리를 나중에 다시 사용할 수 있게함
}