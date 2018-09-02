/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 31 de agosto de 2018, 09:13 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int n;
    scanf("%d",&n);
    if (n%2==0){
        int n2=n/2;
        int n3,n4;
        if (n2<9){
            printf("%d,1",n2);
        }
        if ((n2>9)&&(n2<=99)){
            int n3=n2/10;
            if (n3%3==0){
                int n4=n3-1;
                printf("%d,3",n4);
            }else {
                printf("%d,2",n3);
            }
        }
        if (n2>99){
            int n3=n2/100;
            if (n3%3==0){
                int n4=n3-1;
                printf("%d,3",n4);
            }else {
                printf("%d,2",n3);
            }
        }
    }else if (n%2!=0){
        int n2=n+1;
        if (n2>99){
            int n3=n2/100;
            if (n3%3==0){
                int n4=n3-1;
                printf("%d,3",n4);
            }else {
                printf("%d,2",n3);
            }
        }else if ((n2>9)&&(n2<100)){
            int n3=n2/10;
            if (n3%3==0){
                int n4=n3-1;
                printf("%d,3",n4);
            }else {
                printf("%d,2",n3);
            }
        }
        if (n2<9){
            printf("%d,1",n2);
    }
    }
return 0;
}

