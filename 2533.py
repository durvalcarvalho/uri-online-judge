def main():
    while(True):
        try:
            qnt = int(input())

            disc = []
            carg = []
            t = 0

            for i in range(qnt):
                d,c = map(int, input().split())
                
                t += d*c

                disc.append(d)
                carg.append(c)
            
            ira = t / (100 * sum(carg))

            print("%.4f" % ira)
        
        except:
            break

if __name__ == "__main__":
    main()