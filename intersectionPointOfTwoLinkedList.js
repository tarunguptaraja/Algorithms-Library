<script>


class Node
{
	constructor(item)
	{
		this.data=item;
		this.next=null;
	}
}

let head1,head2;
function getNode()
{
	let c1 = getCount(head1);
		let c2 = getCount(head2);
		
		let d;

		if (c1 > c2) {
			d = c1 - c2;
			return _getIntesectionNode(d, head1, head2);
		}
		else {
			d = c2 - c1;
			return _getIntesectionNode(d, head2, head1);
		}
}

function _getIntesectionNode(d,node1,node2)
{
	let i;
		let current1 = node1;
		let current2 = node2;
		for (i = 0; i < d; i++) {
			if (current1 == null) {
				return -1;
			}
			current1 = current1.next;
		}
		while (current1 != null && current2 != null) {
			if (current1.data == current2.data) {
				return current1.data;
			}
			current1 = current1.next;
			current2 = current2.next;
		}

		return -1;
}

function getCount(node)
{
	let current = node;
		let count = 0;

		while (current != null) {
			count++;
			current = current.next;
		}

		return count;
}

head1 = new Node(3);
head1.next = new Node(6);
head1.next.next = new Node(9);
head1.next.next.next = new Node(15);
head1.next.next.next.next = new Node(30);

// creating second linked list
head2 = new Node(10);
head2.next = new Node(15);
head2.next.next = new Node(30);

document.write("The node of intersection is " + getNode());



</script>
