#ifndef WEBSERVER_H_
#define WEBSERVER_H_

#include <esp_http_server.h>


httpd_handle_t start_webserver(void);
void stop_webserver(httpd_handle_t server);
void initialise_mdns(void);

#endif