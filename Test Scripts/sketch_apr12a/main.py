import serial
import time

arduino = serial.Serial('/dev/ttyACM0', 9600)
time.sleep(2)

print("READY")

while True:
    cmd = input("Command: ")
    arduino.write(cmd.encode())