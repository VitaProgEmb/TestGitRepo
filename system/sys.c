/*

*/
#include "sys.h"
static const char *TAG = "system";


TaskHandle_t sys_tsk;
static void sys_task(void *arg)
{
  ESP_LOGI(TAG,"start sys task");
  while (1)
  {
    
  }
  vTaskDelete(NULL);
}

void sys_init()
{
  xTaskCreatePinnedToCore(sys_task,"sys task",2048,
                          NULL,1,&sys_tsk,1);
}