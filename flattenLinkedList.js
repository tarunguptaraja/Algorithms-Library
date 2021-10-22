<script>
var head; // head of list

	/* Linked list Node */
	
	class Node {
			constructor(val) {
				this.data = val;
				this.down = null;
				this.next = null;
			}
		}

	// An utility function to merge two sorted linked lists
	function merge(a, b) {
		// if first linked list is empty then second
		// is the answer
		if (a == null)
			return b;

		// if second linked list is empty then first
		// is the result
		if (b == null)
			return a;

		// compare the data members of the two linked lists
		// and put the larger one in the result
		var result;

		if (a.data < b.data) {
			result = a;
			result.down = merge(a.down, b);
		}

		else {
			result = b;
			result.down = merge(a, b.down);
		}

		result.right = null;
		return result;
	}

	function flatten(root) {
		// Base Cases
		if (root == null || root.right == null)
			return root;

		// recur for list on right
		root.right = flatten(root.right);

		// now merge
		root = merge(root, root.right);

		// return the root
		// it will be in turn merged with its left
		return root;
	}

	/*
	* Utility function to insert a node at beginning of the linked list
	*/
	function push(head_ref , data) {
		/*
		* 1 & 2: Allocate the Node & Put in the data
		*/
		var new_node = new Node(data);

		/* 3. Make next of new Node as head */
		new_node.down = head_ref;

		/* 4. Move the head to point to new Node */
		head_ref = new_node;

		/* 5. return to link it back */
		return head_ref;
	}

	function printList() {
	var temp = head;
		while (temp != null) {
			document.write(temp.data + " ");
			temp = temp.down;
		}
		document.write();
	}

	
		

		/*
		* Let us create the following linked list 5 -> 10 -> 19 -> 28 | | | | V V V V 7
		* 20 22 35 | | | V V V 8 50 40 | | V V 30 45
		*/

		head = push(head, 30);
		head = push(head, 8);
		head = push(head, 7);
		head = push(head, 5);

		head.right = push(head.right, 20);
		head.right = push(head.right, 10);

		head.right.right = push(head.right.right, 50);
		head.right.right = push(head.right.right, 22);
		head.right.right = push(head.right.right, 19);

		head.right.right.right = push(head.right.right.right, 45);
		head.right.right.right = push(head.right.right.right, 40);
		head.right.right.right = push(head.right.right.right, 35);
		head.right.right.right = push(head.right.right.right, 20);

		// flatten the list
		head = flatten(head);

		printList();


</script>
