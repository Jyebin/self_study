//
//  11021.c
//  1
//
//  Created by 조예빈 on 2022/06/05.
//

#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d %d",&b,&c);
        printf("Case #%d: %d\n",i,b+c);
    }
    return 0;
}
