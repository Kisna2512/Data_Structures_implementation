package DataStrcuturesimplemenatations;

class Stack {
	int[] arr = new int[100];
	int top = -1;

	public void push(int val) {
		top++;
		arr[top] = val;
		return;
	}

	public void pop() {
		if (top == -1) {
			System.out.println("Stack Underflow");
			return;
		}

		top--;

	}

	public void top() {
		if (top != -1) {
			System.out.println("The top element of Stack is: " + arr[top]);
		}
		return;
	}

	public void displayStack() {

		for (int i = top; i >= 0; i--) {
			System.out.print(arr[i] + " ");
		}
	}

}

public class Stack_Using_Array {

	public static void main(String[] args) {
		Stack st=new Stack();
		st.push(3);
		st.push(5);
		st.push(6);
		st.push(8);
		st.pop();
		st.displayStack();
		

	}

}
