/*

*/
#include "uart.h"

TaskHandle_t uart_th;
static void uart_task(void *arg)
{
  while (1)
  {
    
    
  }
  vTaskDelete(NULL);
}

void uart_init()
{

}