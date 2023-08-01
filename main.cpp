//CMSIS
#include "stm32f1xx.h"

//FreeRTOS
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "portmacro.h"


int main(){

  //Initialisation of VTOR
  SCB->VTOR = 0x08000000UL;
  
  
  
  vTaskStartScheduler();
  
  return 0;
}
