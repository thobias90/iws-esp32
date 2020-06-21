#include <stdio.h>
#include <string.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"


#include "wifi_config.h"

static const char *TAG = "Main App";

void app_main(void)
{
    ESP_LOGI(TAG, "IWS - START");
    wifi_init();
}
