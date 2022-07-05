//
//  2562.c
//  1
//
//  Created by 조예빈 on 2022/06/12.
//

#include <stdio.h>
int main()
{
    int i=0,j,mj;
    int arr[9];
    for(i=1;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    
    for(j=0;j<i;j++){
        if(max<arr[j]){
            max = arr[j];
            mj = j;
        }
    }
    printf("%d\n",max);
    printf("%d\n",mj);
    
    return 0;
}
