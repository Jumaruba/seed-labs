#include<stdlib.h>
#include<stdio.h> 
#include<unistd.h>
int main(){
    if (geteuid() != 0){
        printf("Not root\n"); 
    } else printf("Im root\n");
}
