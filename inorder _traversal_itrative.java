class InoderTraversal {
    ArrayList<Integer> inOrder(Node root){
        
        ArrayList<Integer> ll = new ArrayList<>();
        
        Stack<Node> stack = new Stack<>();
        
        Node temp=root;
        if(root==null)return ll;
        
        while(true){
            
            if(temp!=null){
                stack.push(temp);
                temp=temp.left;
            }else{
                if(stack.size()<1)break;
                temp=stack.pop();
                ll.add(temp.data);
                temp=temp.right;
            }
        }
        
        return ll;
    }
    
    
}
