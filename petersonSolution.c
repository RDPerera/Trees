#include<stdio.h>
do{
    flag[j]=true;
    turn=j;
    while(flag[i]==true && turn==i);
    //criticle section
    turn=i;
}while(1);