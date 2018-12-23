def main():

    i = 0

    while(True):
        try:
            i += 1

            word = input()
            frase = input()

            print("Caso #%d:" %i)

            if(frase.count(word)):
                print( "Qtd.Subsequencias:", frase.count(word) )
                print("Pos:", frase.rfind(word) + 1)
            else:
                print("Nao existe subsequencia")

            print()
        
        except:
            break

if __name__ == "__main__":
    main()