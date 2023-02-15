#include <stdio.h>

// int main(void)
// {
//     const unsigned int NUM1 = 3;
//     const unsigned int NUM2 = 5;
    
//     printf("%p \n", &NUM1);   // �ּ�
//     printf("%d \n", NUM1);    // ����
//     printf("%p \n", &NUM2);
//     printf("%d \n", NUM2);

//     return 0;
// }                                                                                                             


// int main(void)
// {
//     int num1 = 10;
//     int num2 = 20;
//     int num3 = 30;

//     int* ptr1 = &num1;
//     int* ptr2 = &num2;
//     int* ptr3 = &num3;

//     ptr3 = ptr2;
//     printf("%d %d \n", *ptr3, *ptr2);
//     ptr2 = ptr1;
//     printf("%d %d \n", *ptr2, *ptr1);
//     ptr1 = ptr2;
//     printf("%d %d \n", *ptr1, *ptr2);

//     printf("%d %d %d", num1, num2, num3);
//     return 0;
// }
                                                                    

// int main(void)
// {
//     int num1 = 15;
//     int num2 = 30;
//     int num3 = 45;

//     int* ptr1 = &num1;
//     int* ptr2 = &num2;
//     int* ptr3 = &num3;

//     ptr1 = ptr2;
//     printf("%d", *ptr1);
//     printf("%d", *ptr2);

//     ptr2 = ptr3;
//     printf("%d", *ptr2);
//     printf("%d", *ptr3);

//     *ptr1 += *ptr3;
//     *ptr2 *= 2;
//     printf("%d", *ptr1);
//     printf("%d", *ptr2);
//     printf("%d", *ptr3);
   
//     printf("%d %d %d", num1, num2, num3);

//     return 0;
// }


// int main()
// {
//     int a=10,b=20,temp;
//     int *x,*y;
//     x=&a;
//     y=&b;
//     printf("a: %d b: %d\n",a,b);
//     temp=*x;
//     *x=*y;
//     *y=temp;
//     printf("a: %d b: %d\n",a,b);

//     return 0;
// }