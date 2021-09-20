#include "freertos/timers.h"

void *const timer_id;
TimerHandle_t timer_handle;
void task3(void *params)
{
    timer_handle = xTimerCreate("timer",(10000 / portTICK_PERIOD_MS),pdFALSE,timer_id, callback);

    xTimerStart(my_timer_handle, 1);
    while (1)
    {
        printf("task3\n");
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}
void callback(TimerHandle_t xTimer)
{
    printf("Callback\n");