//
//  2439.c
//  1
//
//  Created by 조예빈 on 2022/06/05.
//


#include <stdio.h>
int main(){
    int i,j,a,b = 0;
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        for(a=1;a<=i-j;a++){
            printf(" ");
        }
        for(b=1;b<=j;b++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
