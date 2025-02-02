import serial
import tkinter as tk

# Connect to ESP32 Serial Port (Change COM3 to your ESP32 port, e.g., /dev/ttyUSB0 on Mac)
esp32 = serial.Serial('/dev/tty.usbserial-0001', 115200)

def send_command(command):
    esp32.write(command.encode())

# GUI Setup
root = tk.Tk()
root.title("ESP32 Motor Control")

btn_motor_a = tk.Button(root, text="Move Motor A", command=lambda: send_command('A'))
btn_motor_a.pack(pady=5)

btn_motor_b = tk.Button(root, text="Move Motor B", command=lambda: send_command('B'))
btn_motor_b.pack(pady=5)

btn_motor_c = tk.Button(root, text="Move Motor C", command=lambda: send_command('C'))
btn_motor_c.pack(pady=5)

btn_motor_d = tk.Button(root, text="Move Motor D", command=lambda: send_command('D'))
btn_motor_d.pack(pady=5)

btn_stop = tk.Button(root, text="Stop Motors", command=lambda: send_command('S'))
btn_stop.pack(pady=5)

root.mainloop()
