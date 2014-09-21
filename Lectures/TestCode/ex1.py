# Recursive factorial function

def fact(n):
    """
    Function which calculates n!
    @ n       integer
    @ return  n!
    """
    if n==0:
        return 1
    else:
        return n*fact(n-1)

if __name__ == "__main__":
    n=7
    fact(n)
    print("{0}! = {1}".format(n,fact(n)))
