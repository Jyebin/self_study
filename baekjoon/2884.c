//
//  2884.c
//  1
//
//  Created by 조예빈 on 2022/06/03.
//

#include <stdio.h>
int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
    if(m<45){
        if(h-1<0){
            h=24;
        }
        printf("%d %d",h-1,60-(45-m));
    }
    else{
        printf("%d %d",h,m-45);
    }
    
    return 0;
}
