package com.MyArrayDemo.test;

import java.util.stream.IntStream;

import com.MyArrayDemo.arrays.MyArray;

public class TestArray {
	public static void main(String[] args) {
		MyArray ob = new MyArray();
		ob.add(4);
		ob.add(5);
		System.out.println(ob);
		ob.add(8,1);
		ob.add(9,1);
		System.out.println(ob);
		System.out.println("Position of 9: "+ob.searchByValue(9));
		ob.add(3);
		ob.add(5);
		System.out.println(ob);
		ob.deleteByPosition(5);
		System.out.println("After deleting 5: "+ob);
		ob.deleteByPosition(3);
		System.out.println("After deleting 3: "+ob);
		System.out.println("Max Value: "+ob.findMax());
		int[] arr1 = ob.exchangeIndexValue();
		IntStream.of(arr1).forEach(e->System.out.println(e));
		arr1=ob.reverseArray(true);
		System.out.println("Original Array: "+ob);
		IntStream.of(arr1).forEach(e->System.out.println(e));
		System.out.println("Sum: "+ob.findSum());
	}
}
