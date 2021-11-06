package compiled.erasure;

public class CustomNode extends Node {
    public CustomNode(Integer data) { super(data); }

    public void setData(Object data) {
        setData((Integer) data);
    }

    public void setData(Integer data) {
        System.out.println("MyNode.setData");
        super.setData(data);
    }
}