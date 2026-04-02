package com.person;

public class TestPerson {
	public static void main(String[] args) {
		
		Person p1 = new Person("Bharat", "498766");
		System.out.println(p1);
		
		Person p2 = new Person("Asha", "876342");
		System.out.println(p2);
		
		Person p3 = new Person();
		p3.setPname("Naman");
		p3.setMob("459800");
		System.out.println(p3);
	}

}
