def main():
    while(True):
        try:
            vol = float(input())
            diam = float(input())

            alt = vol / (3.14 * ((diam/2)**2) )

            area = 3.14 * ( (diam/2)**2 )

            print("ALTURA = %.2f" % alt)
            print("AREA = %.2f" % area)

        except:
            break

if __name__ == "__main__":
    main()