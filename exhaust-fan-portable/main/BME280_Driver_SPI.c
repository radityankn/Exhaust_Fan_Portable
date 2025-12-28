#include "BMI088_Driver.h"
#include "SPI_Arduino.h"

int bmi088_spi_init(bmi088_spi_handler_t *handler, bmi088_spi_gyro_config_t gyro_config, bmi088_spi_acc_config_t acc_config) {

}
int bmi088_spi_gyro_init(bmi088_spi_handler_t *handler, bmi088_spi_gyro_config_t gyro_config) {

}
int bmi088_spi_acc_init(bmi088_spi_handler_t *handler, bmi088_spi_acc_config_t acc_config) {

}

int bmi088_spi_acc_self_test(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_gyro_self_test(bmi088_spi_handler_t *handler) {

}

int bmi088_spi_acc_soft_reset(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_gyro_soft_reset(bmi088_spi_handler_t *handler) {

}

int bmi088_spi_set_acc_config(bmi088_spi_handler_t *handler, bmi088_spi_acc_config_t config) {

}
int bmi088_spi_set_acc_bwp_osr(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_set_acc_odr(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_set_acc_range(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_set_acc_power_mode(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_set_acc_enabled(bmi088_spi_handler_t *handler) {

}

int bmi088_spi_get_acc_config(bmi088_spi_handler_t *handler, bmi088_spi_acc_config_t *config) {

}
int bmi088_spi_get_acc_bwp_osr(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_get_acc_odr(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_get_acc_range(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_get_acc_power_mode(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_get_acc_enabled(bmi088_spi_handler_t *handler) {

}
int bmi088_spi_read_acc_data(bmi088_spi_handler_t *handler) {
    
}

int bmi088_spi_set_gyro_config(bmi088_spi_handler_t *handler, bmi088_spi_gyro_config_t config);
int bmi088_spi_set_gyro_range(bmi088_spi_handler_t *handler);
int bmi088_spi_set_gyro_bw_odr(bmi088_spi_handler_t *handler);
int bmi088_spi_set_gyro_power(bmi088_spi_handler_t *handler);

int bmi088_spi_get_gyro_config(bmi088_spi_handler_t *handler, bmi088_spi_gyro_config_t *config);
int bmi088_spi_get_gyro_range(bmi088_spi_handler_t *handler);
int bmi088_spi_get_gyro_bw_odr(bmi088_spi_handler_t *handler);
int bmi088_spi_get_gyro_power(bmi088_spi_handler_t *handler);
int bmi088_spi_read_gyro_data(bmi088_spi_handler_t *handler);

int bmi088_spi_read_register(bmi088_spi_handler_t *handler, uint8_t byte_number, uint8_t data);
int bmi088_spi_write_register(bmi088_spi_handler_t *handler, uint8_t byte_number, uint8_t *data_buffer);