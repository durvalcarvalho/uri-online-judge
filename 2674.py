
def isPrime(n):
    if(n<=1):
        return False
    if(n<=3):
        return True
    
    if(n%2==0 or n%3==0):
        return False
    
    i=5
    while(i*i<=n):
        if(n%i==0 or n%(i+2)==0):
            return False
        i = i + 6
    
    return True

def main():
    while(True):
        try:

            NaoEh = 0
            val = int(input())

            if( isPrime(val) ):

                while(val):

                    aux = val % 10
                    val = int(val/10)

                    if(isPrime(aux) == False):
                        print("Primo")
                        NaoEh = 1
                        break
                
                if(NaoEh == 0):
                    print("Super")
            
            else:
                print("Nada")
                    
        except:
            break

if __name__ == "__main__":
    main()