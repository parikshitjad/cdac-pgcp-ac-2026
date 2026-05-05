package com.demo.graphlists;

public class MyGraphList {
	MyLinkedList[] graph;

	public MyGraphList(int v) {
		this.graph=new MyLinkedList[v];
		for(int i=0; i<this.graph.length; i++) {
			graph[i] = new MyLinkedList();
		}
	}
	
	public void addEdge(int source, int dest) {
		graph[source].addNode(dest);
	}
	
	public void printGraph() {
		for(int i=0; i<graph.length; i++) {
			System.out.println(i+"===>");
			graph[i].displayList();
		}
	}
}
