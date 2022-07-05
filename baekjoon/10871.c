//
//  10871.c
//  1
//
//  Created by 조예빈 on 2022/06/07.
//

#include <stdio.h>
int main()
{
    int i,j,k;
    scanf("%d %d",&i,&j); //초반에 두개의 수 입력(i=입력받을 수의 개수, j=비교 대상의 수)
    
    for(int a=1;a<=i;a++){ //입력받은 수(i)까지 입력받음
        scanf("%d",&k);
        if(k<j){ //k가 입력받은 수보다 작으면
            printf("%d ",k);
        }

    }
    
    return 0;
}
