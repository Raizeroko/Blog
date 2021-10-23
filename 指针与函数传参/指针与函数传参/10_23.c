#define _CRT_SECURE_NO_WARNINGS 1

//1.函数的实参与形参
//
void function(int a)
{
	a = 6;
}

int main()
{
	int x;
	x = 8;
	function(8);
	return 0;
}



//2.1
//
function(int* pa)
{
	*pa = 6;
}

int main()
{
	int x = 8;
	int* px = &x;
	function(px);
	return 0;
}


//2.2
//
function(int* pa)
{
	pa = NULL;
}

int main()
{
	int x = 8;
	int* px = &x;
	function(px);
	return 0;
}



//2.2
//
function(int** ppa)
{
	**pa = 6;
	*pa = NULL;
	pa = NULL;
}

int main()
{
	int x = 8;
	int* px = &x;
	int** ppx = &px;
	function(ppx);
	return 0;
}