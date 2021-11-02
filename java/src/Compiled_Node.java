class Compiled_Node {

    public Object data;

    public Compiled_Node(Object data) { this.data = data; }

    public void setData(Object data) {
        System.out.println("Node.setData");
        this.data = data;
    }
}

class Compiled_MyNode extends Node {
    public Compiled_MyNode(Integer data) { super(data); }

    public void setData(Object data) {
        System.out.println("MyNode.setData");
        setData((Integer) data);
    }

    public void setData(Integer data) {
        System.out.println("MyNode.setData");
        super.setData(data);
    }
}