#include <stdio.h>

void main(){
    int age;
    printf("enter your age: ");
    scanf("%d" , &age);

    if(age<18){
        printf("You are still a teenager.");
    }else if(age>=18 && age <=30){
        printf("Adult");
    }else if(age >=30 && age <=60){
        printf("senior citizen");
    }else{
        printf("super senior citizen");
    }
}