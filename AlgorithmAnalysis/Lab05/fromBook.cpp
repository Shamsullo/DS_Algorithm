#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void merge(vector<int>& v, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;

	vector<int> b;
	for(int i = p; i <= q; ++i)
	{
		b.push_back(v[i]);
	}
	b.push_back(10000);
	vector<int> c;
	for(int i = q + 1; i <= r; ++i)
	{
		c.push_back(v[i]);
	}
	c.push_back(10000);

	int i = 1, j = 1;
	for(int k = p; k <= r; ++k)
	{
		if (b[i] <= c[j])
		{
			v[k] = b[i];
			++i;
		}
		else if (b[i] > c[j])
		{
			v[k] = c[j];
			++j;
		}
	}
}

std::vector<int> mergeSort(vector<int>& v, int p, int r)
{
	// p = 0;
	// r = v.size() - 1;
	int q = (p + r) / 2;
	
	if(p >= r)
	{
		return v;
	}

	mergeSort(v, p, q);
	mergeSort(v, p + 1, r);
	merge(v, p, q, r);
}

int partition(vector<int>& v, int p, int r)
{
	int pivot = v[p];
	int q = p;
	for(int u = p + 1; u < r; ++u)
	{
		if(v[u] < pivot)
		{
			swap(v[q], v[u]);
			++q;
		}
	}
	swap(v[q], pivot);
	return q;
}

vector<int> quickSort(vector<int>&v, int p, int r)
{
	if(p >= r)
	{
		return v;
	}
	if (p < r)
	{
		int q = partition(v, p, r);
		quickSort(v, p, q);
		quickSort(v, q + 1, r);
	}
}


int main()
{
	vector<int> v = {3, 4, 2, 1, 0, 5, 10, 7, 8, 9, 6};
	v = quickSort(v, 0, 10);
	for(auto& a: v)
	{
		cout << a << " ";
	}
	cout << endl;
}