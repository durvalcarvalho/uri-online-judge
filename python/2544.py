from math import log2, log

def main():
    while(True):
        try:
            val = int(input())

            pot = val - 1

            if(not pot):
                print(0)
            else:
                print( int(log2(val)) )

        except:
            break

if __name__ == "__main__":
    main()