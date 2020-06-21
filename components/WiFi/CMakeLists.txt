idf_component_register(SRCS "wifi_config.c"
                    INCLUDE_DIRS .
                    REQUIRES esp_system esp_spi_flash esp_event esp_wifi nvs_flash esp_log)