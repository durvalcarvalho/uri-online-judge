def main():
    while(True):
        try:
            qnt = int(input())
            
            lis = list(map(int, input().split()))

            val = sum(lis)

            if(val < 2*qnt/3):
                print("acusacao arquivada")
            else:
                print("impeachment")
        
        except:
            break

if __name__ == "__main__":
    main()