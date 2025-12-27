idf_component_register(SRCS "pwm_generator.c"
                    PRIV_REQUIRES esp_driver_ledc esp_driver_gpio
                    INCLUDE_DIRS ".")
