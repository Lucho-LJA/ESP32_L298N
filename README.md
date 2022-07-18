# About
This library work with l298n drive compatible with ESP32. Use as reference the libray [ESP32_AnalogWrite.h](https://github.com/Lucho-LJA/ESP32_AnalogWrite.git). This version  is configured with driver to 1 or 2 motors.

# Usage
The library use a class and for this example the neame of object is `control_motor`. To create the object ypu must code:
- 2 motors:
    ```c++
    L298N control_motor(pwm_resolution, pin_pwm_A, pin_1, pin_2, pin_3, pin_4, pin_pwm_B)
    ```
- 1 motor:
    ```c++
    L298N control_motor(pwm_resolution, pin_pwm_A, pin_1, pin_2)
    ```
## MOTOR CONTROL
### Using Two Motors
- Move motors with diferent PWM.
    ```c++
    control_motor.moveMotor(pwmA,pwmB);
    ```
- Move motors with iqual PWM
    ```c++
    control_motor.moveMotor(pwm);
    ```
- Move back motors with diferent PWM.
    ```c++
    control_motor.backMotor(pwmA,pwmB);
    ```
- Move back motors with iqual PWM
    ```c++
    control_motor.backMotor(pwm);
    ```
- Move motor A with pins 1-2
    ```c++
    control_motor.moveMotor12(pwm);
    ```
- Move back motor A with pins 1-2
    ```c++
    control_motor.backMotor12(pwm);
    ```
- Move motor B with pins 3-4
    ```c++
    control_motor.moveMotor34(pwm);
    ```
- Move back motor B with pins 3-4
    ```c++
    control_motor.backMotor34(pwm);
    ```
- Stop motors
    ```c++
    control_motor.stopMotor();
    ```
### Using Two Motors
- Move motor
    ```c++
    control_motor.moveMotor(pwm);
    ```
    ```c++
    control_motor.moveMotor12(pwm);
    ```
    ```c++
    control_motor.moveMotor34(pwm);
    ```
- Move back motor
    ```c++
    control_motor.backMotor(pwm);
    ```
    ```c++
    control_motor.backMotor12(pwm);
    ```
    ```c++
    control_motor.backMotor34(pwm);
    ```
- Stop motor
    ```c++
    control_motor.stopMotor();
    ```
- You can use the other functions of 2 motors, but you will only control 1 motor and the the first value of pwm is choiced.




