#include <iostream>
const int TAGE = 7;


int main() {



    float sonne[TAGE];


    for(int z = 0; z< sizeof(sonne)/ sizeof(sonne[0]); z++){        //defining random numbers for sun
        sonne[z] = rand();

    }

    float summe = 0,durchscnhitt = 0;

    for(int i = 0; i< sizeof(sonne)/ sizeof(sonne[0]); i++){
        std::cout << "Sonne am Tag " <<i+1<<" "<< sonne[i] << std::endl;
        summe = summe + sonne[i];

    }
    durchscnhitt = summe / (sizeof(sonne)/ sizeof(sonne[0]));


    std::cout << "Summe an Sonne : " << summe <<std::endl << "Durschnitt: " << durchscnhitt << std::endl;







    return 0;
}