//required header
#include <stdio.h>
#include"header.h"

//this function is to print the corresponding Celsius to Fahrenheit table.
//author:bhavik parekh
//creted:26 dec,2024
//modified:26 dec,2024
void Celsiustofahrenheit(){


	float fahr, celsius,lower, upper, step;

        lower = 0; // lower limit of temperatuire scale
        upper = 300; // upper limit
        step = 20; // step size

        celsius = upper;


        while (celsius <= upper)
        {
                fahr= (((9.0/5.0)* celsius)+ 32.0) ;
                printf ("%-3.0f\t %6.1f\n",celsius,fahr);
                celsius = celsius - step;
	
}

}
