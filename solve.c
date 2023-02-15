#include <stdio.h>

int main(void)
{
    char name[] = "0123456789";
    char* pname1 = name;
    char* pname2 = pname1+1;
    printf("%s \n", name);

    
    *(pname1) = 'A';
    * (pname2+2) = 'A';
    pname2 += 2;
    *(pname2++)='R';
    * (pname2-2) = 'A';

    printf("%s \n",name);
    printf("%s \n",pname1);
    printf("%s \n",pname2);
    return 0;
}
