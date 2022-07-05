//
//  10950.c
//  1
//
//  Created by 조예빈 on 2022/06/03.
//

#include <stdio.h>
int main()
{
    int i,j,a = 0,b = 0;
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    
return 0;
}
