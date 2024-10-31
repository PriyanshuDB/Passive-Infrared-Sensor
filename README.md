# Passive-Infrared-Sensor

This project is an implementation of PIR sensor using Arduino UNO and op-amp ua741. LED glows when motion is detected. The arduino has the code for the functioning of the set up and powers the circuit. The op-amp is used as a
unity gain buffer. In this configuration of the op-amp, it has a high input impedance so that the circuit draws minimum current from the sensor to prevent overloading. The voltage at the 
output and input of the op-amp is the same (gain = 1), but the current drawn from the sensor is less and the current at the output of the op-amp is of greater magnitude (low output impedance).
This stabilizes the overall output signal of the sensor and makes its response consistent. The sensor detects motion of hot/warm bodies as they are a source of IR rays. The circuit is designed
to detect every separate instance of motion.

Video demonstration : https://drive.google.com/file/d/1tsg-ZAlPKvEHcKlVA6mr16sN6jvpxaIp/view?usp=sharing

Simulation : https://www.tinkercad.com/things/1KZYfi22x1M-passive-infrared-sensor?sharecode=PwONgOE8i5m193fqGazVOW_ulo12cuhbS6_nOE1XUGE
(To simulate, click on Simulate, then Start Simulation. To see the output on the serial monitor, click on Code, then Serial monitor. Sensor caliberation time is 30s. Once "Sensor ready" appears on the serial monitor, click on the PIR sensor and drag the object that appears in front of it to make it move, to give input to the sensor)
