// writing program to check voter us valid or not 
#include<stdio.h>
int main(){
    int age;

    //taking age as a input 

    printf("Enter Your Age : ");
    scanf("%d",&age);

  // check valid for vote or not 
   (age>18)?printf("Valid For Vote"):printf("Not Valid For Vote");

    return 0;
}