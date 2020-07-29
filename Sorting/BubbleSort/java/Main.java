public class Main {
    public static void main(String[] args) {
        BubbleSort s = new BubbleSort(10);
        s.input();
        s.printArray();
        System.out.println("Sorting...");
        s.sort();
        s.printArray();
    }
}