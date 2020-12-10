import serial
import time
from datetime import datetime

ser = serial.Serial('COM5', 9600, timeout=0, parity=serial.PARITY_NONE, rtscts=1)

while True:
	try:
		s = str(ser.readline(100).decode())
		if s != "":
			f = open("logg.txt", "a+")
			f.write(str(datetime.now()) + """
""")
	except:
		print("error")

	time.sleep(1)
