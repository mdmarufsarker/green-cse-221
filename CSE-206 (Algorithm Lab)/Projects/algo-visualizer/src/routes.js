import { jsx as _jsx } from "react/jsx-runtime";

// Searching
import LinearSearch from "./pages/searching/Linear_Search";
import BinarySearch from "./pages/searching/Binary_Search";

// Sorting
import BubbleSort from "./pages/sorting/Bubble_Sort";
import CountingSort from "./pages/sorting/Counting_Sort";
import HeapSort from "./pages/sorting/Heap_Sort";
import MergeSort from "./pages/sorting/Merge_Sort";
import QuickSort from "./pages/sorting/Quick_Sort";
import SelectionSort from "./pages/sorting/Selection_Sort";
import RadixSort from "./pages/sorting/Radix_Sort";
import InsertionSort from "./pages/sorting/Insertion_Sort";

const routes = [
  {
    id: 1,
    path: "/linear-search",
    component: _jsx(LinearSearch, {}),
    name: "Linear Search",
  },
  {
    id: 2,
    path: "/binary-search",
    component: _jsx(BinarySearch, {}),
    name: "Binary Search",
  },
  {
    id: 3,
    path: "/bubble-sort",
    component: _jsx(BubbleSort, {}),
    name: "Bubble Sort",
  },
  {
    id: 4,
    path: "/counting-sort",
    component: _jsx(CountingSort, {}),
    name: "Counting Sort",
  },
  {
    id: 5,
    path: "/heap-sort",
    component: _jsx(HeapSort, {}),
    name: "Heap Sort",
  },
  {
    id: 6,
    path: "/insertion-sort",
    component: _jsx(InsertionSort, {}),
    name: "Insertion Sort",
  },
  {
    id: 7,
    path: "/merge-sort",
    component: _jsx(MergeSort, {}),
    name: "Merge Sort",
  },
  {
    id: 9,
    path: "/quick-sort",
    component: _jsx(QuickSort, {}),
    name: "Quick Sort",
  },
  {
    id: 10,
    path: "radix-sort",
    component: _jsx(RadixSort, {}),
    name: "Radix Sort",
  },
  {
    id: 11,
    path: "/selection-sort",
    component: _jsx(SelectionSort, {}),
    name: "Selection Sort",
  }
];

export default routes;
