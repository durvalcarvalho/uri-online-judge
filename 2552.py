def main():

    while(True):
        try:
            x, y = map(int, input().split())

            clone = []
            lis = []
            
            for i in range(x):
                clone.append([0]*y)

            for i in range(x):
                lis.append(list(map(int,input().split())))
            
            for i in range(x):
                for j in range(y):
                    
                    if( lis[i][j] == 1 ):
                        lis[i][j] = 9

                        if( j-1 >= 0 ):
                            clone[i][j-1] += 1
                        
                        if( j+1 <= y-1 ):
                            clone[i][j+1] += 1
                        
                        if ( i-1 >= 0 ):
                            clone[i-1][j] += 1
                        
                        if( i+1 <= x-1 ):
                            clone[i+1][j] += 1
            
            for i in range(x):
                for j in range(y):
                    if(lis[i][j] == 9):
                        clone[i][j] = 9

            for linhas in clone:
                for vals in linhas:
                    print(vals, end="")
                print()

        except:
            break

if __name__ == "__main__":
    main()