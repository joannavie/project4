#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

main()
{
    double B,Y,BMI;

    printf("This program finds the BMI of a person.\n");
    printf("Dwse ta kila: ");
    B = GetReal();
    printf("Dwse to ypsos: ");
    Y = GetReal();
    BMI = B / (Y*Y);

    if (BMI < 18.5) {
        printf("To atomo einai lipovares.\n");
    }
     else if ((BMI >18.5) && (BMI < 25)){
        printf("To atomo einai kanoniko.\n");
     }
      else if ((BMI>25) && (BMI < 30)){
        printf("To atomo einai ypervaro.\n");

      }
        else
          printf("To atomo einai paxysarko.\n");



    system("pause");
}
