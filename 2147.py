def main():
    qnt = int(input())

    for i in range(0, qnt):
        
        text = input()
        time = len(text) * 0.01

        print("%.2f" % time)

if __name__ == "__main__":
    main()