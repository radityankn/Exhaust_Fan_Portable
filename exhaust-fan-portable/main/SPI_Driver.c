#include "SPI.h"
#include "SPI_Driver.h"

/*
your SPI object goes here
If there is more than 1 SPI peripheral, you can use the other one
by adding more object
*/

SPIClass spi_object[SPI_PERIPHERAL_NUMBER];

/*
Your SPI setting struct goes here
you can add as many presets as you want, which can be called upon and used when initializing the 
SPI for the sensor or other means
*/

SPISettings spi_object_settings[SPI_PERIPHERAL_NUMBER];

void driver_spi_settings(   spi_handle_t* handler, \
                            spi_number_t peripheral_number, \
                            int clock_rate, int mosi_pin, \
                            int miso_pin, \
                            int clk_pin, \
                            BitOrder data_order, \
                            int data_mode) {

    handler->spi_number = peripheral_number;
    handler->clk_speed = clock_rate;
    handler->mosi_pin = mosi_pin;
    handler->miso_pin = miso_pin;
    handler->clk_pin = clk_pin;
    handler->data_order = data_order;
    handler->data_mode = data_mode;
}

void driver_spi_begin(spi_handle_t *handler, int ss_pin) {
    spi_object[handler->spi_number].setMISO((int)handler->miso_pin);
    spi_object[handler->spi_number].setMOSI((int)handler->mosi_pin);
    spi_object[handler->spi_number].setSCLK((int)handler->clk_pin);
    spi_object[handler->spi_number].setSSEL(ss_pin);

    spi_object_settings[handler->spi_number] = SPISettings(handler->clk_speed, handler->data_order, handler->data_mode);

    spi_object[handler->spi_number].begin();
}

void driver_spi_begin_transaction(spi_handle_t *handler) {
    spi_object[handler->spi_number].beginTransaction(spi_object_settings[handler->spi_number]);
}

void driver_spi_end_transaction(spi_handle_t *handler) {
    spi_object[handler->spi_number].endTransaction();
}

void driver_spi_transfer(spi_handle_t *handler, int &buffer, size_t byte_size) {
    spi_object[handler->spi_number].transfer(buffer, byte_size);
}

int driver_spi_transfer_byte(spi_handle_t *handler, int value) {
    return spi_object[handler->spi_number].transfer(value);
}

void driver_spi_end(spi_handle_t *handler) {
    spi_object[handler->spi_number].end();
}

// Various setup functions
/*
void arduino_spi_set_bit_order(BitOrder data_order) {
    __spi_data_order = data_order;
}

void arduino_spi_set_data_mode(uint8_t data_mode) {
    __spi_data_mode = data_mode;
}
*/