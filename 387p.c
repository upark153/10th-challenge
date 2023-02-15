#include <stdio.h>
// int main(void)
// {
//     int* arr1[5];
//     int* arr2[3][5];

//     int** ptr1 = arr1;
//     int* (*ptr2)[5] = arr2;
// }


// void SimpleFuncOne(int* ar1, int* ar2)
// {}
// void SimpleFuncTwo(int (*ar3)[4], int(*ar4)[4])
// {}
// int main(void)
// {
//     int arr1[3];
//     int arr2[4];
//     int arr3[3][4];
//     int arr4[2][4];

//     SimpleFuncOne(arr1, arr2);
//     SimpleFuncTwo(arr3, arr4);
// }

int main(void)
{
    int arr[3][2]={{1, 2}, {3, 4}, {5, 6}};
    printf("%d %d \n", arr[1][0], arr[0][1]);
    printf("%d %d \n", *(arr[2]+1), *(arr[1]+1));
    printf("%d %d \n", (*(arr+2))[0], (*(arr+0))[1]);
    printf("%d %d \n", **arr, *(*(arr+0)+0));
    return 0;
}

