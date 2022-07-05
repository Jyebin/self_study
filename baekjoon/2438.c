//
//  2438.c
//  1
//
//  Created by 조예빈 on 2022/06/05.
//

#include <stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        for(k=0;k<j;k++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
