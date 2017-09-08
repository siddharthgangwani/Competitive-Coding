import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BigInteger a,b,c,d,temp;
		int t,i;
		i=0;
		Scanner in=new Scanner(System.in);
		t=in.nextInt();
		for(i=0;i<t;i++)
		{
			b=in.nextBigInteger();
			c=in.nextBigInteger();
			d=in.nextBigInteger();
			a=c.multiply(BigInteger.valueOf(2));
			a=a.subtract(b);
			a=a.subtract(d);
			System.out.println(a);
		}
	}
}