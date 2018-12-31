def main():

    while(True):
        try:
            qnt, minP, maxP = map( int, input().split() )

            aprovados = 0

            for i in range(qnt):
                val = int(input())

                if(val>= minP and val<=maxP):
                    aprovados += 1

            print(aprovados)
        
        except:
            break

if __name__ == "__main__":
    main()