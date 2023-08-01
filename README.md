# Raw STM32F103C8 CMSIS+FreeRTOS+IAR
Raw IAREW project for STM32 BluePill using only CMSIS + FreeRTOS
Can be used as a template for new projects.
It should compile without errors as-is (tested on IAR EW for ARM v9.30.1)

Notes: 

  -in file startup_stm32f103xb.s default interrupt handlers used by FreeRTOS are redirected to FreeRTOS port Handlers
  
  -FreeRTOSConfig.h is taken from FreeRTOS official demo, only configCPU_CLOCK_HZ set to 8MHz
