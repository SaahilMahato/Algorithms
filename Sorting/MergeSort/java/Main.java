public class Main {
    public static void main(String[] args) {
        MergeSort s = new MergeSort(10);
        s.input();
        s.printArray();
        System.out.println("Sorting...");
        s.sort();
        s.printArray();
    }    
}