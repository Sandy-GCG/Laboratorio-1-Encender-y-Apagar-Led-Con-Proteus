#include <Laboratorio 1 - Encender y Apagar Led - Proteus.h>

void main()
{

   while (TRUE){
      output_high(PIN_B0); // PIN_B0=1
      delay_ms(100);
      output_low(PIN_B0); // PIN_B0=0
      delay_ms(100);
   }

}
