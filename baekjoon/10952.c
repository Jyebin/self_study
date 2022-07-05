//
//  10952.c
//  1
//
//  Created by 조예빈 on 2022/06/09.
//

#include <stdio.h>
int main()
{
    int a,b;
    while(1){
        scanf("%d %d",&a,&b);
        if(a==0&&a==b){
            break;
        }
        printf("%d\n",a+b);
    }
    return 0;
}
