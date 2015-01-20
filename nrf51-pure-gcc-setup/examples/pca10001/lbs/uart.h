/* Copyright (c) yamukha@ukr.net All Rights Reserved.
 *
 * The information contained herein is property of yamukha@ukr.net
 *
 * Code is granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 *
 * @defgroup uart
 * @{
 * @ingroup uart
 * @brief uart utils.
 *
 * @details This module implements utils for custom nrF52811 board
 *
 * @note The module based on  Nordic simple uart  
 *
 */

#ifndef _UART_H__
#define _UART_H__

#include "simple_uart.h"
#include <stdio.h>

//static void uart_tx_char (char ch);
//static void uart_tx_str (char * str);
//static void uart_tx_int (int i);
//static void uart_tx_hex (char ch)

#define UART_RX 22
#define UART_TX 21
#define UART_CTS 20
#define UART_RTS 19

#define UART_HEX_MODE 1

static void uart_tx_char(char ch) {
	simple_uart_put(ch);
}

static void uart_tx_str(char * str) {
	unsigned char bufi[32];
	sprintf((char*) bufi, "%s%s%s", "\n\r", str, "\n\r");
	simple_uart_putstring(bufi);
}

static void uart_tx_int(int i) {
	unsigned char bufi[32];
	sprintf((char*) bufi, "%d", i);
	simple_uart_putstring(bufi);
}

static void uart_tx_hex(char ch) {
	if (ch < 0)
		ch += 128;
	unsigned char bufi[32];
	sprintf((char*) bufi, "%x", ch);
	simple_uart_putstring(bufi);
}

static void uart_tx_status_code(char * str, int i, char hexmode) {
	unsigned char bufi[32];
	if (hexmode)
		sprintf((char*) bufi, "\n\r%s 0x%x \n\r", str, i);
	else
		sprintf((char*) bufi, "\n\r%s %d \n\r", str, i);
	simple_uart_putstring(bufi);
}

static void uart_tx_hex_buffer(char * ch, int len ) {
        uint32_t i;
        unsigned char bufi[4];
        for   (i = 0; i < len; i++)
        {
	if (ch < 0)
		ch += 128;
	sprintf((char*) bufi, "%x ", ch[i]);
	simple_uart_putstring(bufi);
       }
}

#endif 
