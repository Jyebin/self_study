//
//  14681.c
//  1
//
//  Created by 조예빈 on 2022/06/03.
//

#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    
    if(x>0&&y>0){
        printf("1");
    }
    else if(x<0&&y>0){
        printf("2");
    }
    else if(x<0&&y<0){
        printf("3");
    }
    else{
        printf("4");
    }
    
    return 0;
}
