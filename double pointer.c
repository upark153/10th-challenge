#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int* p;
    int* q;
    int* r;
    int** pp;

    num1 = 10;
    num2 = 20;

    p = &num1;
    printf("%d %d %d %d \n", p, *p, num1, &num1);
    q = &num2;
    printf("%d %d %d %d \n", q, *q, num2, &num2);
    r = &num1;

    pp = &p;
    *pp = q;
    **pp = 1024;
    pp = &r;
    **pp = *p * 2;
    printf("%d \n", num1);
    printf("%d \n", num2);
}


void MaxAndMin(int *arr, int size, int **maxPtr, int **minPtr)
{
    int *max, *min;
    int i;

    max=min=&arr[0];

    for(i=0; i<size; i++)
    {
        if(*max < arr[i])
            max = &arr[i];
        if(*min > arr[i])
            min = &arr[i];
    }

    *maxPtr=max;
    *minPtr=min;

}

int main(void)
{
    int* maxPtr;
    int* minPtr;
    int arr[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("정수 입력 %d: ", i+1);
        scanf("%d", &arr[i]);

        MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);
        printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);
        return 0;
    }
}

// void maxandmin(int *arr, int len, int **maxPtr, int **minPtr) {
//     // 배열을 가리키는 포인터, 배열 길이, *maxPtr을 가리키는 포인터, *minPtr을 가리키는 포인터
//     int *max, *min;
//     max = min = &arr[0];  // 포인터 변수 max와 min에 배열의 0번째값 주소를 저장

//     for (int i = 0; i < len; i++) {
//         if (*max < arr[i]) {  // max가 가리키는 주소의 값보다 현재 배열의 i번째 값이 클 때
//             max = &arr[i];  // max에 배열의 i번째 주소 저장
//         }
//         if (*min > arr[i]) {  // min이 가리키는 주소의 값보다 현재 배열의 i번째 값이 작을 때
//             min = &arr[i];  // min에 배열의 i번째 주소 저장
//         }
//     }
//     *maxPtr = max;  // *maxPtr에 max가 가지고 있는 주소값 저장
//     *minPtr = min;  // *minPtr에 min이 가지고 있는 주소값 저장
// }

// int main() {
//     int *maxPtr, *minPtr;
//     int arr[5];
//     int len = sizeof(arr) / sizeof(int);

//     for (int i = 0; i < len; i++) {
//         scanf("%d", &arr[i]);
//     }

//     maxandmin(arr, len, &maxPtr, &minPtr);  // 배열과 배열의 길이, maxPtr의 주소, minPtr의 주소 전달
    
//     printf("%d %d\n", *maxPtr, *minPtr);  // maxPtr이 가리키는 주소의 값과 minPtr이 가리키는 주소의 값 출력
//     printf("\n");

//     return 0;
// }