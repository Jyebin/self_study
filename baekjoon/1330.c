//
//  1330.c
//  1
//
//  Created by 조예빈 on 2022/06/03.
//

#include <stdio.h>
int main()
{
    int a,b;
    char i;
    scanf("%d %d",&a,&b);
    scanf("%c",&i);
    if(a>b){
        printf(">\n");
    }
    else if(a<b){
        printf("<\n");
    }
    else{
        printf("==\n");
    }
    return 0;
}
