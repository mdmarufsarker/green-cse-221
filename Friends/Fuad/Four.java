// Write a Java program that sorts an array of integers using multiple threads.

import java.util.Arrays;

class Four{
    public static void main(String[] args) {
        int[] array = {5, 3, 8, 2, 1, 4};
        System.out.println("Original array: " + Arrays.toString(array));

        bubbleSortMultiThreaded(array);
        
        System.out.println("Sorted array: " + Arrays.toString(array));
    }

    public static void bubbleSortMultiThreaded(int[] array) {
        int numThreads = Runtime.getRuntime().availableProcessors();
        int length = array.length;
        
        for (int i = 0; i < length - 1; i++) {
            boolean swapped = false;
            
            BubbleSortThread[] threads = new BubbleSortThread[numThreads];
            for (int j = 0; j < numThreads; j++) {
                threads[j] = new BubbleSortThread(array, j, numThreads);
                threads[j].start();
            }
            
            for (int j = 0; j < numThreads; j++) {
                try {
                    threads[j].join();
                    swapped |= threads[j].hasSwapped();
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
            
            if (!swapped) {
                break;
            }
        }
    }

    private static class BubbleSortThread extends Thread {
        private int[] array;
        private int start;
        private int step;
        private boolean swapped;

        public BubbleSortThread(int[] array, int start, int step) {
            this.array = array;
            this.start = start;
            this.step = step;
            this.swapped = false;
        }

        public boolean hasSwapped() {
            return swapped;
        }

        @Override
        public void run() {
            int length = array.length;

            for (int i = start; i < length - 1; i += step) {
                for (int j = 0; j < length - i - 1; j++) {
                    if (array[j] > array[j + 1]) {
                        // Swap array[j] and array[j + 1]
                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                        swapped = true;
                    }
                }
            }
        }
    }
}
