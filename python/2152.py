def main():
	qnt = int(input())

	for i in range(0, qnt):
		h, m, p = map(int, input().split())

		print("%02d:%02d - " %(h, m), end="")

		if(p):
			print("A porta abriu!")
		else:
			print("A porta fechou!")

			
if __name__ == "__main__":
	main()