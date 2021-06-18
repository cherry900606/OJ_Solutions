#include<iostream>
using namespace std;
class maxHeap
{
public:
	maxHeap()
	{
		size = 0;
		for (int i = 0; i < 1025; i++) arr[i] = 0;
	}
	int arr[1025];
	int size;
	int parent(int i) { return (i - 1) / 2; }
	int find_left(int i) { return 2 * i + 1; }
	int find_right(int i) { return 2 * i + 2; }
	int getSize() { return size; }
	bool isEmpty() { return size == 0; }

	void heap_down(int i)
	{
		int left = find_left(i), right = find_right(i);
		int largest = i;

		if (left < this->size && arr[left] > arr[i])
			largest = left;
		if (right < this->size && arr[right] > arr[largest])
			largest = right;
		if (largest != i)
		{
			swap(arr[i], arr[largest]);
			heap_down(largest);
		}
	}
	void heap_up(int i)
	{
		if (i != 0 && arr[parent(i)] < arr[i])
		{
			swap(arr[i], arr[parent(i)]);
			heap_up(parent(i));
		}
	}
	void push(int n)
	{
		arr[this->size] = n;
		this->size++;
		heap_up(this->size - 1);
	}
	void pop()
	{
		arr[0] = arr[this->size - 1];
		this->size--;
		heap_down(0);
	}
	int top() { return arr[0]; }
};
class minHeap
{
public:
	minHeap()
	{ 
		size = 0;
		for (int i = 0; i < 1025; i++) arr[i] = 0;
	}
	int arr[1025];
	int size;
	int parent(int i) { return (i - 1) / 2; }
	int find_left(int i) { return 2*i + 1; }
	int find_right(int i) { return 2 * i + 2; }
	int getSize() { return size; }
	bool isEmpty() { return size == 0; }

	void heap_down(int i)
	{
		int left = find_left(i), right = find_right(i);
		int smallest = i;

		if (left < this->size && arr[left] < arr[i])
			smallest = left;
		if (right < this->size && arr[right] < arr[smallest])
			smallest = right;
		if (smallest != i)
		{
			swap(arr[i], arr[smallest]);
			heap_down(smallest);
		}
	}
	void heap_up(int i)
	{
		if (i != 0 && arr[parent(i)] > arr[i])
		{
			swap(arr[i], arr[parent(i)]);
			heap_up(parent(i));
		}
	}
	void push(int n)
	{
		arr[this->size] = n;
		this->size++;
		heap_up(this->size - 1);
	}
	void pop()
	{
		arr[0] = arr[this->size - 1];
		this->size--;
		heap_down(0);
	}
	int top() { return arr[0]; }
};
int main()
{
	int n;
	while (cin >> n)
	{
		minHeap heap1;
		maxHeap heap2;
		while (n--)
		{
			int num;
			cin >> num;
			heap1.push(num);
			heap2.push(num);
		}
		for (int i = 0; i < heap1.size; i++)
		{
			if (i != heap1.size-1) cout << heap1.arr[i] << " ";
			else cout << heap1.arr[i] << endl;
		}
		for (int i = 0; i < heap2.size; i++)
		{
			if (i != heap2.size - 1) cout << heap2.arr[i] << " ";
			else cout << heap2.arr[i] << endl;
		}
	}
	return 0;
}
