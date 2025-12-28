#ifndef BMI088_DRIVER_H
#define BMI088_DRIVER_H

#ifdef __cplusplus
extern "C" {
#endif

//Accelerometer Register Map
#define BMI088_ACC_CHIP_ID                 0x00
#define BMI088_ACC_ERR_REG                 0x02
#define BMI088_ACC_STATUS                  0x03
#define BMI088_ACC_DATA_X_H                0x12
#define BMI088_ACC_DATA_X_L                0x13
#define BMI088_ACC_DATA_Y_H                0x14
#define BMI088_ACC_DATA_Y_L                0x15
#define BMI088_ACC_DATA_Z_H                0x16
#define BMI088_ACC_DATA_Z_L                0x17
#define BMI088_ACC_SENSORTIME_DATA_0       0x18
#define BMI088_ACC_SENSORTIME_DATA_1       0x19
#define BMI088_ACC_SENSORTIME_DATA_2       0x1A
#define BMI088_ACC_INIT_STAT_1             0x1D
#define BMI088_SENSOR_TEMP_H               0x22
#define BMI088_SENSOR_TEMP_L               0x23
#define BMI088_ACC_FIFO_LENGTH_H           0x24
#define BMI088_ACC_FIFO_LENGTH_L           0x25
#define BMI088_ACC_FIFO_DATA               0x26
#define BMI088_ACC_CONF                    0x40
#define BMI088_ACC_FIFO_DOWNS              0x41
#define BMI088_ACC_FIFO_WTM_H              0x45
#define BMI088_ACC_FIFO_WTM_L              0x46
#define BMI088_ACC_FIFO_CONFIG_0           0x48
#define BMI088_ACC_FIFO_CONFIG_1           0x49
#define BMI088_INT1_IO_CONF                0x53
#define BMI088_INT2_IO_CONF                0x54
#define BMI088_INT1_INT2_MAP_DATA          0x58
#define BMI088_ACC_SELF_TEST               0x6D
#define BMI088_ACC_PWR_CONF                0x7C
#define BMI088_ACC_PWR_CTRL                0x7D
#define BMI088_ACC_SOFTRESET               0x7E

//Gyroscope Register Map
#define BMI088_GYRO_CHIP_ID                0x00
#define BMI088_GYRO_RATE_DATA_1            0x02
#define BMI088_GYRO_RATE_DATA_2            0x03
#define BMI088_GYRO_RATE_DATA_3            0x04
#define BMI088_GYRO_RATE_DATA_4            0x05
#define BMI088_GYRO_RATE_DATA_5            0x06
#define BMI088_GYRO_RATE_DATA_5            0x07
#define BMI088_GYRO_INT_STAT_1             0x0A
#define BMI088_FIFO_STATUS                 0x0E
#define BMI088_GYRO_RANGE                  0x0F
#define BMI088_GYRO_BANDWITH               0x10
#define BMI088_GYRO_LPM1                   0x11
#define BMI088_GYRO_SOFTRESET              0x14
#define BMI088_GYRO_INT_CTRL               0x15
#define BMI088_INT3_INT4_IO_CONF           0x16
#define BMI088_INT3_INT4_IO_MAP            0x18
#define BMI088_GYRO_FIFO_WM_ENABLE         0x1E
#define BMI088_GYRO_FIFO_EXT_INT_S         0x34
#define BMI088_GYRO_SELF_TEST              0x3C
#define BMI088_GYRO_FIFO_CONFIG_0          0x3D
#define BMI088_GYRO_FIFO_CONFIG_1          0x3E
#define BMI088_GYRO_FIFO_DATA              0x3F

//Accelerometer Status & Setting Bitmask
#define BMI088_ACC_CHIP_ID_VALUE               0x1E
#define BMI088_ACC_ERR_REG_CONF_ERROR          0b00000100
#define BMI088_ACC_ERR_REG_FATAL_ERROR         0b00000001
#define BMI088_ACC_STATUS_DRDY                 0b10000000
#define BMI088_ACC_INT_STAT_1_DRDY             0b10000000
#define BMI088_ACC_FIFO_EMPTY                  0x8000
#define BMI088_ACC_BWP_OSR4                    0x08
#define BMI088_ACC_BWP_OSR2                    0x09
#define BMI088_ACC_BWP_NORMAL                  0x0A
#define BMI088_ACC_ODR_12H5                    0x05
#define BMI088_ACC_ODR_25HZ                    0x06
#define BMI088_ACC_ODR_50HZ                    0x07
#define BMI088_ACC_ODR_100HZ                   0x08
#define BMI088_ACC_ODR_200HZ                   0x09
#define BMI088_ACC_ODR_400HZ                   0x0A
#define BMI088_ACC_ODR_800HZ                   0x0B
#define BMI088_ACC_ODR_1600HZ                  0x0C
#define BMI088_ACC_RANGE_3G                    0x00
#define BMI088_ACC_RANGE_6G                    0x01
#define BMI088_ACC_RANGE_12G                   0x02
#define BMI088_ACC_RANGE_24G                   0x04
#define BMI088_ACC_SELF_TEST_OFF               0x00
#define BMI088_ACC_SELF_TEST_POSITIVE          0x0D
#define BMI088_ACC_SELF_TEST_NEGATIVE          0x09
#define BMI088_ACC_PWR_CONF_MODE_SUSPENDED     0x03
#define BMI088_ACC_PWR_CONF_MODE_ACTIVE        0x00
#define BMI088_ACC_PWR_CTRL_ACCEL_OFF          0x00
#define BMI088_ACC_PWR_CTRL_ACCEL_ON           0x04
#define BMI088_ACC_SOFTRESET_RESET_VAL         0xB6

//Gyro SBMI088_tatus & Setting Bitmask
#define BMI088_GYRO_CHIP_ID_VALUE              0x0F
#define BMI088_GYRO_INT_STAT_1_GYRO_DRDY       0b10000000
#define BMI088_GYRO_INT_STAT_1_FIFO_INT        0b00010000
#define BMI088_GYRO_FIFO_STATUS_FIFO_OVERRUN   0b10000000
#define BMI088_GYRO_RANGE_2000                 0x00
#define BMI088_GYRO_RANGE_1000                 0x01
#define BMI088_GYRO_RANGE_500                  0x02
#define BMI088_GYRO_RANGE_250                  0x03
#define BMI088_GYRO_RANGE_125                  0x04
#define BMI088_GYRO_BANDWITH_ODR2K_F532        0x00
#define BMI088_GYRO_BANDWITH_ODR2K_F230        0x01
#define BMI088_GYRO_BANDWITH_ODR1K_F116        0x02
#define BMI088_GYRO_BANDWITH_ODR400_F47        0x03
#define BMI088_GYRO_BANDWITH_ODR200_F23        0x04
#define BMI088_GYRO_BANDWITH_ODR100_F12        0x05
#define BMI088_GYRO_BANDWITH_ODR200_F64        0x06
#define BMI088_GYRO_BANDWITH_ODR100_F32        0x07
#define BMI088_GYRO_LPM1_MODE_NORMAL           0x00
#define BMI088_GYRO_LPM1_MODE_SUSPEND          0x80
#define BMI088_GYRO_LPM1_MODE_DEEP_SUSPEND     0x20
#define BMI088_GYRO_SOFTRESET_VALUE            0xB6
#define BMI088_GYRO_NEWDATA_INT_ENABLE         0b10000000
#define BMI088_GYRO_FIFO_INT_ENABLE            0b01000000
#define BMI088_GYRO_SELF_TEST_RATE_OK          0b00010000
#define BMI088_GYRO_SELF_TEST_BIST_FAIL        0b00000100
#define BMI088_GYRO_SELF_TEST_BIST_RDY         0b00000010
#define BMI088_GYRO_SELF_TEST_TRIG_BIST        0b00000001

//FIFO and Interrupt Status and Settings Bitmask
#define BMI088_FIFO_CONFIG_0_MODE_STREAM       0x00
#define BMI088_FIFO_CONFIG_0_MODE_FIFO         0x01
#define BMI088_FIFO_CONFIG_1_ACC_ENABLE        0b01000000
#define BMI088_FIFO_CONFIG_1_INT1_EN           0b00001000
#define BMI088_FIFO_CONFIG_1_INT2_EN           0b00000100
#define BMI088_INT1_IO_CONF_INT1_IN            0b00010000
#define BMI088_INT1_IO_CONF_INT1_OUT           0b00001000
#define BMI088_INT1_IO_CONF_INT1_OD            0b00000100
#define BMI088_INT1_IO_CONF_INT1_LVL           0b00000010
#define BMI088_INT2_IO_CONF_INT2_IN            0b00010000
#define BMI088_INT2_IO_CONF_INT2_OUT           0b00001000
#define BMI088_INT2_IO_CONF_INT2_OD            0b00000100
#define BMI088_INT2_IO_CONF_INT2_LVL           0b00000010
#define BMI088_INT1_INT2_MAP_DATA_INT2_DRDY    0b01000000
#define BMI088_INT1_INT2_MAP_DATA_INT2_FWM     0b00100000
#define BMI088_INT1_INT2_MAP_DATA_INT2_FFULL   0b00010000
#define BMI088_INT1_INT2_MAP_DATA_INT1_DRDY    0b00000100
#define BMI088_INT1_INT2_MAP_DATA_INT1_FWM     0b00000010
#define BMI088_INT1_INT2_MAP_DATA_INT1_FFULL   0b00000001
#define BMI088_INT4_IO_CONF_INT4_OD            0b00001000
#define BMI088_INT4_IO_CONF_INT4_LVL           0b00000100
#define BMI088_INT3_IO_CONF_INT3_OD            0b00000010
#define BMI088_INT3_IO_CONF_INT3_LVL           0b00000001
#define BMI088_INT3_INT4_MAP_DATA_INT4_DRDY    0b10000000
#define BMI088_INT3_INT4_MAP_DATA_INT4_FIFO    0b00100000
#define BMI088_INT3_INT4_MAP_DATA_INT3_FIFO    0b00000100
#define BMI088_INT3_INT4_MAP_DATA_INT3_DRDY    0b00000001
#define BMI088_FIFO_WM_ENABLE_WM_ENABLED       0x08
#define BMI088_FIFO_WM_ENABLE_WM_DISABLED      0x88
#define BMI088_FIFO_EXT_INT_SYNC_ENABLED       0b00100000
#define BMI088_FIFO_EXT_INT_SYNC_SOURCE_INT3   0x00
#define BMI088_FIFO_EXT_INT_SYNC_SOURCE_INT4   0b00010000

//Type definitions
typedef struct {
    int acc_cs_pin;
    int gyr_ps_pin;
    int gyr_cs_pin;
    int clk_speed;
    int *gyro_data_buffer;
    int *acc_data_buffer;
    //status will be appended here
    int fifo_status = 0;
    int self_test_status = 0;
    int acc_conf_error = 0;
    int acc_fatal_error = 0;
    int fifo_overrun_status = 0;
    int fifo_empty = 0;

} bmi088_spi_handler_t;

typedef struct {
    int bwp_oversampling;
    int output_data_rate;
    int output_full_range;
    int power_mode;
    int accel_enable;

} bmi088_spi_acc_config_t;

typedef struct {
    int output_full_range;
    int bw_odr;
    int power_config;

} bmi088_spi_gyro_config_t;

int bmi088_spi_init(bmi088_spi_handler_t *handler, bmi088_spi_gyro_config_t gyro_config, bmi088_spi_acc_config_t acc_config);
int bmi088_spi_gyro_init(bmi088_spi_handler_t *handler, bmi088_spi_gyro_config_t gyro_config);
int bmi088_spi_acc_init(bmi088_spi_handler_t *handler, bmi088_spi_acc_config_t acc_config);

int bmi088_spi_acc_self_test(bmi088_spi_handler_t *handler);
int bmi088_spi_gyro_self_test(bmi088_spi_handler_t *handler);

int bmi088_spi_acc_soft_reset(bmi088_spi_handler_t *handler);
int bmi088_spi_gyro_soft_reset(bmi088_spi_handler_t *handler);

int bmi088_spi_set_acc_config(bmi088_spi_handler_t *handler, bmi088_spi_acc_config_t config);
int bmi088_spi_set_acc_bwp_osr(bmi088_spi_handler_t *handler);
int bmi088_spi_set_acc_odr(bmi088_spi_handler_t *handler);
int bmi088_spi_set_acc_range(bmi088_spi_handler_t *handler);
int bmi088_spi_set_acc_power_mode(bmi088_spi_handler_t *handler);
int bmi088_spi_set_acc_enabled(bmi088_spi_handler_t *handler);

int bmi088_spi_get_acc_config(bmi088_spi_handler_t *handler, bmi088_spi_acc_config_t *config);
int bmi088_spi_get_acc_bwp_osr(bmi088_spi_handler_t *handler);
int bmi088_spi_get_acc_odr(bmi088_spi_handler_t *handler);
int bmi088_spi_get_acc_range(bmi088_spi_handler_t *handler);
int bmi088_spi_get_acc_power_mode(bmi088_spi_handler_t *handler);
int bmi088_spi_get_acc_enabled(bmi088_spi_handler_t *handler);
int bmi088_spi_read_acc_data(bmi088_spi_handler_t *handler);

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

#ifdef __cplusplus
}
#endif

#endif //BMI088_DRIVER_H