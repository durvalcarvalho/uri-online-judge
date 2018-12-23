def main():

    dia, mes, ano = map(int, input().split("/"))

    print("%02d/%02d/%02d" % (mes, dia, ano))
    print("%02d/%02d/%02d" % (ano, mes, dia))
    print("%02d-%02d-%02d" % (dia, mes, ano))

if __name__ == "__main__":
    main()