import socket 

UDP_IP = "127.0.0.1"	#your local ip address or ip of server
UDP_PORT = 8000				#your port

sock = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
sock.bind ((UDP_IP, UDP_PORT))

while True:
	print('listening')
	data, addr = sock.recvfrom(10000000)
	if data[8] is 'c':
		cos = data[:8]
	print('cosine of angle= ' + cos)
	print('cos squared= {:.5f}' .format(float(cos)**2))