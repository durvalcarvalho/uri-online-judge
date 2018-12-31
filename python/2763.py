import re

def main():

    lis = re.split( '[- .]' , input() )

    for i in lis:
        print(i)

if __name__ == "__main__":
    main()