#include<stdio.h>
#include <iostream>
#include <stdlib.h>
int main()
{
    const int N = 10;
    bool check = true;
    int puffer, list[N], i;

    for(int i=0; i<(sizeof(list)/ sizeof(*list));i++){
     list[i]=std::rand()%10;
    }

    while (check) {
    for(i = 0;i<N;i++)
        {
        if (list[i]>list[i+1]){
            puffer = list[i];
            list[i]=list[i+1];
            list[i+1]=puffer;
            }else{
                check = false;
            }
        }

    }
    for(int i=0; i<(sizeof(list)/ sizeof(*list));i++){
        std::cout <<list[i]<<std::endl;
    }
    return 0;
}