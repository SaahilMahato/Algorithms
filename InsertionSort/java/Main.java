public class Main {
    public static void main(String[] args) {
        InsertionSort s = new InsertionSort(10);
        s.input();
        s.printArray();
        s.sort();
        s.printArray();
    }
}