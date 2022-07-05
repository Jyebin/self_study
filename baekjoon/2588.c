//
//  2588.c
//  1
//
//  Created by 조예빈 on 2022/06/02.
//

#include <stdio.h>
int main(){
    int a,b,c,d,e;
    
    scanf("%d",&a);
    scanf("%d",&b);
    c = b % 10;
    d = (b - c) / 10 % 10;
    e = (b - 10*d - c) / 100 % 10;
       
    printf("%d\n",a*c);
    printf("%d\n",a*d);
    printf("%d\n",a*e);
    printf("%d\n",a*b);
    
    return 0;
}
