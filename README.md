# About
This library work with l298n drive. Use the libray ESP32_AnalogWrite.h (https://github.com/Lucho-LJA/ESP32_AnalogWrite.git). This version  is configured with driver to 2 motors.
Define:
```
#define L298N_2_MOTOR 
```
to use the library.

# Usage
The library use a class. start with:
```
    L298N control_1(uint8_t pwm_b, uint8_t pinA,uint8_t pin1,uint8_t pin2,uint8_t pin3,uint8_t pin4,uint8_t pinB)
```
## 2 MOTOR CONTROL
    To move 2 motor with 2 control o one control of pwm use:
    ```
        moveMotor(int8_t pwmA, int8_t pwmB);
        moveMotor(int8_t pwmA);
    ```
    To move back 2 motor with 2 control o one control of pwm use:
    ```
        backMotor(int8_t pwmA, int8_t pwmB);
        backMotor(int8_t pwmA);
    ```
    To move motor12 with pwm use:
    ```
        moveMotor12(int8_t pwmA);
    ```
    To move back motor34 with pwm use:
    ```
        backMotor34(int8_t pwmA);
    ```
    To stop motors use:
    ```
        stopMotor(int8_t pwmA);
    ```




