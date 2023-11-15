/*

异常链(Exception Chaining)：

当一个异常由另一个异常引起时，可以将原始异常信息附加到新的异常中。
这样做的好处是，可以在不丢失原始异常信息的情况下，将其传递给更高层的异常处理程序。

在Java SE 7中，Throwable类新增了3个方法，用于处理异常链：

    Throwable getCause()：返回原始异常，如果没有原始异常，则返回null。
    Throwable initCause(Throwable cause)：设置原始异常。
    Throwable getSuppressed()：返回一个数组，该数组包含原始异常之外的其他异常。


*/


public class Chainage_Exception {

    public static void main(String[] args) {
        try {
            method1();
        } catch (Exception e) {
            System.out.println("Exception: " + e.getMessage());
            System.out.println("Cause: " + e.getCause());
            System.out.println("Suppressed: " + e.getSuppressed());
        }
    }

    public static void method1() throws Exception {
        try {
            method2();
        } catch (NullPointerException e) {
            throw new CustomException("New info from method1", e);
        }
    }

    public static void method2() {
        Object o = null;
        o.toString();
    }
}

