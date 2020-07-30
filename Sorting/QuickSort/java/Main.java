public class Main {
    public static void main(String[] args) {
        QuickSort s = new QuickSort(10);
        s.input();
        s.printArray();
        System.out.println("Sorting...");
        s.sort();
        s.printArray();
    }    
}