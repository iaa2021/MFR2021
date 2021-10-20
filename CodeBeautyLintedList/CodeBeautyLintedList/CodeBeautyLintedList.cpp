// CodeBeautyLintedList.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


void printList(Node* ptr)
{
	while (ptr != 0)
	{
		cout << ptr->value << endl;
		ptr = ptr->Next;
	}
}
void insertAtFront(Node **ptr, int num)
{
	Node* newPtr = new Node(num);
	newPtr->Next = *ptr;
	*ptr = newPtr;
}
int main()
{

	Node* head = new Node(1);
	Node* first = new Node(2);
	Node* second = new Node(3);
	head->Next = first;
	first->Next = second;
	second->Next = 0;
	
	printList(head);
	cout << "\nArray after inserting at front:\n";
	insertAtFront(&head, 0);
	printList(head);
	cout << "\nArray after inserting at back:\n";
	Node* backHead = new Node(4);
	backHead->Next = 0;
	second->Next = backHead;
	printList(head);
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
