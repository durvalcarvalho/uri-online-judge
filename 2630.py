def main():

    qnt = int(input())

    for i in range(qnt):
        mode = input()
        
        lis = list(map(int,input().split()))

        if(mode == "min"):
            gray = min(lis)
        
        elif(mode == "max"):
            gray = max(lis)
        
        elif(mode == "mean"):
            gray = int(sum(lis)/3)

        else:
            gray = int(0.3 * lis[0] + 0.59 * lis[1] + 0.11* lis[2])
        
        print("Caso #%d: %d" % (i+1, gray))

if __name__ == "__main__":
    main()