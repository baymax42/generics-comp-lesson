package examples.factory;

public class FileContent {
    protected String content;
    protected String header;

    public FileContent(String content, String header) {
        this.content = content;
        this.header = header;
    }

    @Override
    public String toString() {
        return header + '\n' +
                "---------------------------\n" +
                content;
    }
}
