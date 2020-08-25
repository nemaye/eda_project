import socket 

UDP_IP = "192.168.0.105"
UDP_PORT = 8000

sock = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
sock.bind ((UDP_IP, UDP_PORT))

while True:
	print('listening')
	data, addr = sock.recvfrom(10000000)
	if data[8] is 'c':
		cos = data[:8]
	print('cosine of angle= ' + cos)
	print('cos squared= ' + str(float(cos)**2))