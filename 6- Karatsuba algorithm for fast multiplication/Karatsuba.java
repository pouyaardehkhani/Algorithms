public class Karatsuba {
    public static long multiply(long x, long y) {
        if (x < 10 && y < 10) {
            return x * y;
        }
        int noOneLength = numLength(x);
        int noTwoLength = numLength(y);
        int maxNumLength
                = Math.max(noOneLength, noTwoLength);
        Integer halfMaxNumLength
                = (maxNumLength / 2) + (maxNumLength % 2);
        long maxNumLengthTen
                = (long) Math.pow(10, halfMaxNumLength);
        long a = x / maxNumLengthTen;
        long b = x % maxNumLengthTen;
        long c = y / maxNumLengthTen;
        long d = y % maxNumLengthTen;
        long z0 = multiply(a, c);
        long z1 = multiply(a + b, c + d);
        long z2 = multiply(b, d);
        long ans = (z0 * (long) Math.pow(10, halfMaxNumLength * 2) + ((z1 - z0 - z2) * (long) Math.pow(10, halfMaxNumLength) + z2));
        return ans;
    }
    public static long  multiply(long x,long y,int BASE){
        int xLength = Long.toString(x).length();
        int yLength = Long.toString(y).length();
        int max = Math.max(xLength,yLength);
        if(max < 10)
            return (long)x*(long)y;
        int N = max/2;
        long multiplier = (long)Math.pow(BASE,N);
        long a = x/multiplier;
        long b = x%multiplier;
        long c = y/multiplier;
        long d = y%multiplier;
        long ac = multiply(a,c,BASE);
        long bd = multiply(b,d,BASE);
        long res = multiply((a+b),(c+d),BASE);
        long result = ac * (long)Math.pow(BASE,N)+ bd+((long)Math.pow(BASE,N/2)*res);
        return result;
    }

    private static int numLength(long n) {
        int noLen = 0;
        while (n > 0) {
            noLen++;
            n /= 10;
        }
        return noLen;
    }
}
