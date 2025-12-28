idf_component_register(SRCS "BME280_Driver_SPI.c" "SPI_Driver.c" "pwm_generator.c"
                    PRIV_REQUIRES esp_driver_ledc esp_driver_gpio
                    INCLUDE_DIRS ".")
