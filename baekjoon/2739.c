//
//  2739.c
//  1
//
//  Created by 조예빈 on 2022/06/03.
//

#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    
    for(i=1;i<10;i++){
        printf("%d * %d = %d\n", n,i,n*i);
    }
    return 0;
}
