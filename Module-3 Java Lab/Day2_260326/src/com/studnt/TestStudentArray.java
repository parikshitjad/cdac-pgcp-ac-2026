package com.studnt;

public class TestStudentArray {
	public static void main(String[] args) {
		
		Student[] sarr = new Student[5];
		StudentService.addNewStudent(sarr);
		StudentService.Displayall(sarr);
		
	}

}
