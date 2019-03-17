while(True):
	
	try:
		a, b = map(int, input().split())
		
		binA = bin(a)[2:]
		binB = bin(b)[2:]

		while(len(binA) != 32):
			binA = '0' + binA
		
		while(len(binB) != 32):
			binB = '0' + binB

		binC = ''
			
		for i in range(31, -1, -1):
			if(binB[i]==binA[i]):
				binC = '0' + binC
			else:
				binC = '1' + binC

		print(int(binC, 2))

	except:
		break
