//
//  8393.c
//  1
//
//  Created by 조예빈 on 2022/06/03.
//

#include <stdio.h>
int main(){
    int n,i,j=0,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j = j + i;
        k = j + k;
    }
    printf("%d",k);
    return 0;
}
