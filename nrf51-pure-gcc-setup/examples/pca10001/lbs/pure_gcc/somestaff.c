// https://github.com/microbuilder/IntroToBLE


// http://developer.mbed.org/questions/4421/How-to-change-BLE-MAC-Address-on-mbed-nr/?sort=
// https://devzone.nordicsemi.com/question/6566/how-to-get-6-byte-mac-address-at-nrf51822/

// ble_error_t nRF51Gap::setAddress(addr_type_t type, const uint8_t address[ADDR_LEN])
// {
//   if (type > ADDR_TYPE_RANDOM_PRIVATE_NON_RESOLVABLE) {
//         return BLE_ERROR_PARAM_OUT_OF_RANGE;
//  ble_gap_addr_t dev_addr;
//  dev_addr.addr_type = type;

//  memcpy(dev_addr.addr, address, ADDR_LEN);
// ASSERT_INT(ERROR_NONE, sd_ble_gap_address_set(BLE_GAP_ADDR_CYCLE_MODE_NONE, &dev_addr), BLE_ERROR_PARAM_OUT_OF_RANGE);
 
//   return BLE_ERROR_NONE;
//}
 
// getAddress(addr_type_t *typeP, uint8_t addressP[ADDR_LEN])
//{
//    ble_gap_addr_t dev_addr;
//    if (sd_ble_gap_address_get(&dev_addr) != NRF_SUCCESS) {
//        return BLE_ERROR_PARAM_OUT_OF_RANGE;
//    }
//
//    if (typeP != NULL) {
//        *typeP = static_cast<addr_type_t>(dev_addr.addr_type);
//    }
//    if (addressP != NULL) {
//        memcpy(addressP, dev_addr.addr, ADDR_LEN);
//    }
//     return BLE_ERROR_NONE;
// }

//bool data ;
//nrf_delay_ms (80);
//nrf_gpio_pin_toggle (LEDBUTTON_LED_PIN_NO);
//nrf_gpio_cfg_input (LEDBUTTON_BUTTON_PIN_NO,NRF_GPIO_PIN_NOPULL);
//GPIO_BUTTON_WITH_PULLUP_CONFIG(LEDBUTTON_BUTTON_PIN_NO);  
//uint32_t err_code;
//err_code = app_button_is_pushed(LEDBUTTON_BUTTON_PIN_NO, &data);
//APP_ERROR_CHECK(err_code);
//data = nrf_gpio_pin_read (LEDBUTTON_BUTTON_PIN_NO);
//if (data) 
//   nrf_gpio_pin_set(LEDBUTTON_LED_PIN_NO);
//else
//   nrf_gpio_pin_clear(LEDBUTTON_LED_PIN_NO);


