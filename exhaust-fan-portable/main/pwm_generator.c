#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/ledc.h"
#include "esp_err.h"

int led_duty_array[3] = {128, 256, 512};

ledc_timer_config_t timer_config_struct = {
    .speed_mode = LEDC_LOW_SPEED_MODE,
    .duty_resolution = LEDC_TIMER_10_BIT,
    .timer_num = LEDC_TIMER_0,
    .freq_hz = 25000,
    .clk_cfg = LEDC_AUTO_CLK,
};

ledc_channel_config_t channel_config_struct = {
    .gpio_num = 1,
    .channel = LEDC_CHANNEL_0,
    .intr_type = LEDC_INTR_DISABLE,
    .timer_sel = LEDC_TIMER_0,
    .duty = 512,
    .hpoint = 0,
    .sleep_mode = LEDC_SLEEP_MODE_KEEP_ALIVE,
};

void set_pwm_function(ledc_channel_t channel, ledc_timer_t timer, int pin, int value) {
    channel_config_struct.channel = channel;
    channel_config_struct.timer_sel = timer;
    channel_config_struct.gpio_num = pin;
    channel_config_struct.duty = value;

    timer_config_struct.timer_num = timer;

    ESP_ERROR_CHECK(ledc_timer_config(&timer_config_struct));
    ESP_ERROR_CHECK(ledc_channel_config(&channel_config_struct));
}

void app_main(void) {
    set_pwm_function(LEDC_CHANNEL_0, LEDC_TIMER_0, 1, led_duty_array[0]);
    set_pwm_function(LEDC_CHANNEL_1, LEDC_TIMER_0, 2, led_duty_array[1]);
    set_pwm_function(LEDC_CHANNEL_2, LEDC_TIMER_0, 42, led_duty_array[2]);
    //vTaskDelay(3000/portTICK_PERIOD_MS);
    int index_1 = 0;
    int index_2 = 1;
    int index_3 = 2;
    //while (1) {
        //ledc_set_duty_and_update(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, led_duty_array[index_1], 0);
        //ledc_set_duty_and_update(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, led_duty_array[index_2], 0);
        //ledc_set_duty_and_update(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, led_duty_array[index_3], 0);
        //vTaskDelay(3000/portTICK_PERIOD_MS);
        //index_1 = index_2;
        //index_2 = index_3;
        //index_3 = index_1;
    //}
}