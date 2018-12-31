def main():
    while True:
        try:
            tam = int(input())

            for i in range(0, tam):
                for j in range(0, tam):

                    # odd
                    if(tam % 2 and i==int(tam/2) and j==int(tam/2)):
                        print(4, end = "")

                    # borda interna
                    elif(i >= int(tam/3) and i < tam - int(tam/3)
                    and  j >= int(tam/3) and j < tam - int(tam/3) ):
                        print(1, end = "")

                    # diag principal
                    elif(i==j):
                        print(2, end = "")
                    
                    # diag sec
                    elif(i + j == tam-1):
                        print(3, end = "")
                    
                    # borda externa
                    else:
                        print(0, end = "")

                print()
            print()
        except:
            break

if __name__ == "__main__":
    main()