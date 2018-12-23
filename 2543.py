def main():
    while(True):
        try:
            qnt, id = map(int, input().split())

            total = 0

            for i in range(qnt):
                i_d, jogo = map(int, input().split())

                if(i_d == id and jogo == 0):
                    total += 1
            
            print(total)

        
        except:
            break

if __name__ == "__main__":
    main()