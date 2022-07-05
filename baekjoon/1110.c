//
//  1110.c
//  1
//
//  Created by 조예빈 on 2022/06/09.
//

//#include <stdio.h>
//int main()
//{
//    int num,n;
//    int count = 0;
//    scanf("%d",&num);
//    while(1){
//        if(num<0){
//            num = num + num;
//            num = n;
//        }else{
//        num =
//        num = n;
//        }
//        count ++;
//    }
//    printf("%d",count);
//    return 0;
//}

#include <stdio.h>
int main(){
    int n,num=0; //n은 입력받을 변수, num은 n을 따로 보관해둘 변수
    int count = 0; //count는 0 으로 초기화
    
    scanf("%d",&n);
    num = n; //n을 num에 저장
    
    while(1){
        n = (10*(n%10)) + (((n/10)+(n%10))%10);
        count ++;
        
        if(n==num){
            printf("%d",count);
            break;
        }
    }
    return 0;
}

