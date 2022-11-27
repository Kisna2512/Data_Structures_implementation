package DataStrcuturesimplemenatations;

class Node {
	int val;
	Node next;

	Node(int val) {
		this.val = val;
		next = null;
	}

}

class List {
	Node head;

	List() {
		head = null;
	}

	public void insertAtFirst(int val) {
		Node n = new Node(val);
		n.next = head;
		head = n;
		return;
	}

	public void insertAtEnd(int val) {
		Node temp = head;
		Node n = new Node(val);
		while (temp.next != null) {
			temp = temp.next;
		}
		temp.next = n;
		return;
	}

	public void insertAtMid(int val, int i) {
		Node n = new Node(val);
		Node temp = head;
		i -= 1;
		while (temp.next != null && i > 0) {
			temp = temp.next;
			i--;
		}

		n.next = temp.next;
		temp.next = n;
		return;

	}

	public void deleteAtFirst() {
		head = head.next;
		return;
	}

	public void deleteAtEnd() {
		Node temp = head;

		while (temp.next.next != null) {
			temp = temp.next;
		}

		temp.next = null;
		return;
	}

	public void deleteAtMid(int i) {
		Node temp = head;
		i -= 1;
		while (temp.next != null && i > 0) {
			temp = temp.next;
			i--;
		}
		Node n = temp.next;
		temp.next = n.next;
		return;

	}

	public void reverseList() {
		Node temp = head;
		Node prev = null;
		Node nxt = null;

		while (temp != null) {
			nxt = temp.next;
			temp.next = prev;
			prev = temp;
			temp = nxt;
		}
		head = prev;
		return;
	}

	public void printList() {
		Node temp = head;
		while (temp != null) {
			System.out.print(temp.val + "->");
			temp = temp.next;
		}
		System.out.print("NULL");
		System.out.println();

	}

}

public class Linked_List {

	public static void main(String[] args) {
		List ll = new List();
		ll.insertAtFirst(34);
		ll.insertAtFirst(23);
		ll.insertAtFirst(21);
		ll.insertAtEnd(89);
		ll.insertAtMid(45, 2);
        ll.deleteAtFirst();
        ll.deleteAtEnd();
        ll.deleteAtMid(1);
		ll.reverseList();
		ll.printList();
	}

}
