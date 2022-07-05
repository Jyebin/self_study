//
//  9498.c
//  1
//
//  Created by 조예빈 on 2022/06/03.
//

#include <stdio.h>
int main()
{
    int i=0;
    scanf("%d",&i);
    if(90<=i){
        printf("A");
    }
    else if(80<=i){
        printf("B");
    }
    else if(70<=i){
        printf("C");
    }
    else if(60<=i){
        printf("D");
    }
    else{
        printf("F");
    }
    
    return 0;
}
