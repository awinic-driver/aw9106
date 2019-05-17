#ifndef _AW9106_H_
#define _AW9106_H_

#define MAX_I2C_BUFFER_SIZE 65536

#define AW9106_ID 0x23

struct aw9106 {
    struct i2c_client *i2c;
    struct device *dev;
    struct led_classdev cdev;
    struct work_struct brightness_work;

    int reset_gpio;

    unsigned char chipid;

    int imax;
    int rise_time;
    int on_time;
    int fall_time;
    int off_time;
};

#endif

