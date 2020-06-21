#
# This is a project Makefile. It is assumed the directory this Makefile resides in is a
# project subdirectory.
#

PROJECT_NAME := iot-weather-station
EXTRA_COMPONENT_DIRS := $(HOME)/esp/projects/iot_weather_station/components
include $(IDF_PATH)/make/project.mk

