from instructions import Instructions
import serial
import serial.tools.list_ports as port_list
import time
import sys

class SerialConnection:


    def __init__(self, port):

        self.ser = serial.Serial(port='COM8', baudrate=56700, bytesize=serial.EIGHTBITS, parity=serial.PARITY_ODD, stopbits=serial.STOPBITS_TWO, xonxoff=False, timeout=20)
        self.connectionTest()

        # self.sendInstruction(Instructions.CALIBRATE)

    def connectionTest(self):
        g_byte = self.ser.read(1)
        o_byte = self.ser.read(1)

        if (g_byte.decode("ascii") != "G") | (o_byte.decode("ascii") != "O") :
            print("Unsuccessful Serial Connection to Tiva, Try Again")
        else:
            print("Successful Serial Connection to Tiva")

    def sendInstruction(self, instruction):

        print(f'Sending: {instruction}\n')
        self.ser.write(instruction.encode("ascii"))

        ser_bytes = self.ser.read(1)
        print(f'Receiving\nraw data: {ser_bytes}')
        decoded_bytes = (ser_bytes.decode("ascii"))
        print(f'Ascii Value: {decoded_bytes}', flush=True)


