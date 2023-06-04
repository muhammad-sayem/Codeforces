#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while(test--){
        int a, b, mult;
        scanf("%d%d", &a, &b);

        mult = a*b;


        if(mult == 0) printf("0\n");
        else if(mult == 2) printf("1\n");
        else if(mult%2 == 0) printf("0\n");
        else if(mult%2 != 0){
            if(mult == 1) printf("0\n");
            else if((a==1 && b!=1) || (b==1 && a!=1)) printf("1\n");
            else printf("0\n");
        }

    }

    return 0;
}

