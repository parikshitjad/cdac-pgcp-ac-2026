package com.demo.stacks;

public class MyStackGeneric<T> {
	Node top;
	class Node{
		T data;
		Node next;
		public Node(T data) {
			super();
			this.data=data;
			this.next=null;
		}
	}
	
	public MyStackGeneric() {
		this.top = null;
	}
	
	public void push(T data) {
		Node newNode=new Node(data);
		if(!isEmpty()) {
			newNode.next=top;
		}
		top=newNode;
		System.out.println("pushed: "+data);
	}
	
	public T pop() {
		if(!isEmpty()) {
			Node temp=top;
			top=top.next;
			temp.next=null;
			System.out.println("poped: "+temp.data);
			return temp.data;
		} else {
			System.out.println("stack is empty");
			return null;
		}
	}

	public boolean isEmpty() {
		return top==null;
	}

	public void displayData() {
		Node temp=top;
		while(temp!=null) {
			System.out.println(temp.data+"---->");
			temp=temp.next;
		}
		System.out.println("null");
	}
}
