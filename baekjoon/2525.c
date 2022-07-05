//
//  2525.c
//  1
//
//  Created by 조예빈 on 2022/06/03.
//

#include <stdio.h>
int main()
{
    int hour,min,time,a,b;
    scanf("%d %d",&hour,&min);
    scanf("%d",&time);
    a = (min + time) / 60;
    b = (min + time) % 60;

    if((min+time)>=60){
        if((hour + a)>=24){
            hour = hour + a - 24;
            min = b;
        }else{
            hour  =  hour + a;
            min = b;
        }
    }
    else{
        min = min + time;
        }
    
    printf("%d %d", hour, min);
    
    return 0;
}
