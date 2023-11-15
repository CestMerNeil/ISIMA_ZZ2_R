public class Generics<T> {
    private T data;

    public void setData(T data) {
        this.data = data;
    }

    public T getData() {
        return this.data;
    }

    public static void main(String[] args) {
        Generics<String> g1 = new Generics<String>();
        g1.setData("Hello");
        System.out.println(g1.getData());

        Generics<Integer> g2 = new Generics<Integer>();
        g2.setData(123);
        System.out.println(g2.getData());
    }
}