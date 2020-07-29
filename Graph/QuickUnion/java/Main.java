public class Main {
    public static void main(String args[]) {
        QuickUnion arr = new QuickUnion(10);
        arr.union(1,3);
        arr.union(5,8);
        arr.union(1,5);

        System.out.println(arr.connected(4,5));
        System.out.println(arr.connected(1,2));
        System.out.println(arr.connected(5,3));
    }
}