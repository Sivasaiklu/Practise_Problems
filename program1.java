package Others;

import java.util.Scanner;

public class program1 {
	public static void main(String[] args) {
		Scanner sai = new Scanner(System.in);
		int n = sai.nextInt();
		int key = sai.nextInt();
		int[] a = new int[n];
		for(int i=0;i<n;i++) {
			a[i] = sai.nextInt();
		}
		sai.close();
		int first=-1, last=-1;
		for(int i=0,j=n-1;i<n;i++,j--) {
			if(a[i] == key && first == -1)
				first = i;
			if(a[j] == key && last == -1)
				last = j;
			if(first != -1 && last != -1)
				break;
		}
		System.out.println("First occurance of "+key+" is : "+first+" and last occurance is: "+last);
		if(first == -1)
			System.out.println(-1);
		else
			System.out.println("Difference is: "+ (last - first));		
	}

}


/*the above program is finding the difference of first occurrence and 
last occurrence of a key element in the given array*/

