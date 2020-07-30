import java.lang.Math;

class Karatsuba {
    public long multiply(long x, long y) {
        if(x < 10 || y < 10) {
            return x * y;
        }
        else {
            int len_x = String.valueOf(x).length();
            int len_y = String.valueOf(y).length();
            int n = Math.max(len_x, len_y);
            int m = n / 2;

            long a = x / (long)Math.pow(10, m);
            long b = x % (long)Math.pow(10, m);
            long c = y / (long)Math.pow(10, m);
            long d = y % (long)Math.pow(10, m);

            long ac = multiply(a, c);
            long bd = multiply(b, d);
            long sum_ad_bc = multiply(a+b, c+d) - ac - bd;
            
            long result = ac * (long)Math.pow(10, 2*m) + (sum_ad_bc * (long)Math.pow(10, m)) + bd;

            return result;
        }
    }
}