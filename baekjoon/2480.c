//
//  2480.c
//  1
//
//  Created by 조예빈 on 2022/06/03.
//

#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if(i==j && j==k){
        printf("%d",10000+i*1000);
    }else if(i==j){
        printf("%d",1000+i*100);
    }else if(k==i){
        printf("%d",1000+k*100);
    }else if(j==k){
        printf("%d",1000+j*100);
    }else{
        if(i>j && i>k){
            printf("%d",i*100);
        }else if(j>k){
            printf("%d",j*100);
        }else{
            printf("%d",k*100);
        }
    }
    return 0;
}
