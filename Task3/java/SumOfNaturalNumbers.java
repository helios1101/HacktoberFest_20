// Sum of n natural number (the positive numbers 1, 2, 3... are known as natural numbers)

class SumOfNaturalNumbers
{  
    public static void main(String args[]) 
    { 
        System.out.println(
            iterateUntil(42)
        ); 
        System.out.println(
            recurseUntil(42)
        ); 
        System.out.println(
            computeUntil(42)
        );
    }

    // using for loop
    private static int iterateUntil(int n) {
        int sum = 0;

        for(int i = 1; i <= n; i++) {
            sum += i;
        }

        return sum;
    }

    // using recursion
    private static int recurseUntil(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }

        return n + recurseUntil(n-1);
    }

    // using arithmetic
    private static int computeUntil(int n) {
        return n*(n+1)/2;
    }
} 
