public class Main {
    public static void main(String[] args) {
        SelectionSort s = new SelectionSort(10);
        s.input();
        s.printArray();
        s.sort();
        s.printArray();
    }
}