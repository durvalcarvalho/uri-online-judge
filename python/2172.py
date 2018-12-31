def main():
    e,m = 1,1
    while(True):
        e,m = map(int, input().split())

        if(e == 0 or m == 0):
            break
            
        print(e * m)

if __name__ == "__main__":
    main()