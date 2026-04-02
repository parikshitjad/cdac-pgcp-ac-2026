package com.service;

import java.util.Scanner;

public class TestArray {
	public static void main(String[] args) {
		
		int[] a = new int[10];
		int[] b = {34,55,67,98};
		int[] sumarr = ArrayService.findDigitSums(b);
		for(int i=0; i<sumarr.length; i++) {
			System.out.println("Sum of digits of number: "+b[i]+"----->"+sumarr[i]);
		}
		
		Scanner sc = new Scanner(System.in);
		ArrayService.acceptData(sumarr);
		ArrayService.displayData(sumarr);
		System.out.println("Enter number to search: ");
		int num = sc.nextInt();
		int pos = ArrayService.searchData(a, num);
		if(pos!=-1) {
			System.out.println("number found at: "+pos);		
		}
		else {
			System.out.println("number not found.");
		}
		
		int s = ArrayService.findSum(a);
		System.out.println("Sum: "+s);
		int max = ArrayService.findMax(a);
		int min = ArrayService.findMin(a);
		System.out.println("Max: "+max+" Min: "+min);
		sc.close();
	}

}
