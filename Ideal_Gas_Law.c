#include <stdio.h>
#include <stdlib.h>

int main() {

    const float r=0.82;

    float pressure_vl;

   
    int mol,volume,heat;


    printf("Please enter mole:");
    scanf("%d",&mol);

    printf("Please enter volume:");
    scanf("%d",&volume);

    printf("Please enter heat:");
    scanf("%d",&heat);


    pressure_vl=(mol*r*heat)/volume;


    printf("%d Receptacle pressure is:%f\n\n",volume,pressure_vl);

    return 0 ;

}
