# List all source files the application uses.
APPLICATION_SRCS = $(notdir $(wildcard ../*.c)) 
# APPLICATION_SRCS += nrf_delay.c
APPLICATION_SRCS += simple_uart.c
APPLICATION_SRCS += app_gpiote.c
APPLICATION_SRCS += app_button.c
APPLICATION_SRCS += app_timer.c
APPLICATION_SRCS += ble_advdata.c
APPLICATION_SRCS += ble_conn_params.c
APPLICATION_SRCS += app_scheduler.c
APPLICATION_SRCS += ble_stack_handler.c
APPLICATION_SRCS += ble_srv_common.c
APPLICATION_SRCS += ble_debug_assert_handler.c
# APPLICATION_SRCS += uart.c

# Use shell to find name of root folder. Possible but horrible to do in make.
PROJECT_NAME = $(shell basename "$(realpath ../)")
PROJECT_NAME = app

DEVICE = NRF51
BOARD = BOARD_PCA10001
#SEGGER_SERIAL =

USE_SOFTDEVICE = s110
SDK_PATH =$(HOME)/Projects/nrf51/lib/nrf51sdk/Nordic/nrf51822/
#SDK_PATH = $(HOME)/Projects/nrf51/nrf51822/
TEMPLATE_PATH = $(HOME)/Projects/nrf51-pure-gcc-setup/template/
#TEMPLATE_PATH = $(HOME)/workspace/ble/nrf51-pure-gcc-setup/template/

CFLAGS = -Os

GDB_PORT_NUMBER = 2331

include $(TEMPLATE_PATH)Makefile
