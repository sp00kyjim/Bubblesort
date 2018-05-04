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
    for(i = 0;i<(sizeof(list)/ sizeof(*list));i++)
        {
            check = false;              //check ist erstmahl immer Falsch, ausser wenn später die if pruefung richtig (--> etwas noch nicht sortiert ist)
        if (list[i]>list[i+1]){
            check = true;
            puffer = list[i+1];         //der Tausch zwischen i und +1 war verkehrt
            list[i+1]=list[i];
            list[i]=puffer;
            }
        }

    }
    for(int i=0; i<(sizeof(list)/ sizeof(*list));i++){
        std::cout <<list[i]<<std::endl;
    }
    return 0;
}
