#ifndef WIFI_CONFIG_H_
#define WIFI_CONFIG_H_

#define ESP_WIFI_SSID   "iot_weather_station"
#define ESP_WIFI_PASS   "iws2020b"

#define WIFI_STATION_SSID "AP 701"
#define WIFI_STATION_PASS "16072705"

#define ESP_MAXIMUM_RETRY   5

/* The event group allows multiple bits for each event, but we only care about two events:
 * - we are connected to the AP with an IP
 * - we failed to connect after the maximum amount of retries */
#define WIFI_CONNECTED_BIT BIT0
#define WIFI_FAIL_BIT      BIT1


void wifi_init(void);


#endif