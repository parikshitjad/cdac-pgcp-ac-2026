package com.demo.test;

import com.demo.stacks.MyQueueLinkList;

public class TestMyQueueList {
	
	public static void main(String[] args) {
		MyQueueLinkList que = new MyQueueLinkList();
		que.enqueue(11);
		que.enqueue(12);
		que.enqueue(13);
		que.enqueue(14);
		que.enqueue(10);
		que.enqueue(11); 
		while(!que.isEmpty()) {
			System.out.println("Data: "+que.dequeue());
		}
	}

}
