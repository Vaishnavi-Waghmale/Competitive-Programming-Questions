/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    float n = sc.nextInt();
		    float x = sc.nextInt();
		    float y = sc.nextInt();
		    float a = sc.nextInt();
		    float b = sc.nextInt();
		    if((x/a)<(y/b))
		        System.out.println("Petrol");
		    else if((x/a)>(y/b))
		        System.out.println("Diesel");
		    else
		        System.out.println("Any");
		        
		}
	}
}
