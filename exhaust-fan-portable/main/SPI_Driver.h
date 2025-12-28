#ifndef SPI_DRIVER_H
#define SPI_DRIVER_H

#ifdef __cplusplus
extern "C" {
#endif

#define SPI_PERIPHERAL_NUMBER 2

typedef enum {
    //add your SPI enumerations here, it will corresponds with the SPI peripherals
    SPI_NUMBER_1,
    SPI_NUMBER_2
} spi_number_t;

typedef struct {
    spi_number_t spi_number;
    int clk_speed; 
    int mosi_pin; 
    int miso_pin; 
    int clk_pin; 
    BitOrder data_order; 
    int data_mode;
} spi_handle_t;

void driver_spi_settings(spi_handle_t* handler, \
                            spi_number_t peripheral_number, \
                            int clock_rate, int mosi_pin, \
                            int miso_pin, \
                            int clk_pin, \
                            BitOrder data_order, \
                            int data_mode);
void driver_spi_begin(spi_handle_t *handler, int ss_pin);
void driver_spi_begin_transaction(spi_handle_t *handler);
void driver_spi_end_transaction(spi_handle_t *handler);
void driver_spi_end(spi_handle_t *handler);
//void driver_spi_set_bit_order();
//void driver_spi_set_bit_order();
//void driver_spi_set_data_mode();
void driver_spi_transfer(spi_handle_t *handler, int value);
int driver_spi_transfer_byte(spi_handle_t *handler, int value);

#ifdef __cplusplus
}
#endif

#endif //SPI_DRIVER_H