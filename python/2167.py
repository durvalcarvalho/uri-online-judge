def main():
    
    qnt = int(input())

    num = input().split()

    num = list(map(int, num))

    for i in range(qnt-1):
        if(num[i] > num[i+1]):
            print(i+2)
            break
        if(i == qnt-2):
            print(0)

if __name__ == "__main__":
    main()