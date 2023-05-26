
struct Node
{
	int val;
	Node* next;
};
Class LinkList
{
	Node * root;
	LinkList();
	~LinkList();

	void Insert(int val)
	{
		if (root == null)
		{
			root = new Node;
			root->val = val;
			root->next = Null;
		}
		else
		{
			Node* curr = root;
			while (curr->next != null)
			{
				curr = curr->next;
			}
			Node* newNode = new Node;
			newNode->val = val;
			curr->next = newNode;
			newNode->next = null;
		}
	}

	void Delete(int val)
	{
		if (root == null)
		{
			return;
		}

		if (root->val  == val)
		{
			Node* NewNode = root;
			root = NewNode->next;
			delete NewNode;
		}

		Node* curr = root;
		while (curr->next != null && curr->next->val != val)
		{
			curr = curr->next;
		}
		if (curr->next != null)
		{
			Node* temp = curr->next;
			curr->next = curr->next->next;
			delete temp;
		}
	}
	void InsertAtPos(int pos, int val)
	{
		int i = 0;
		if (root == null)
		{
			Insert(int val);
			return;
		}

		if (pos == 0)
		{
			Node* NewNode = new Node;
			NewNode->next = root;
			NewNode->val = val;
			root = NewNode;

		}
		else
		{
			Node* curr = root;
			while (curr->next != null && pos - 1 > i)
			{
				curr = curr->next;
				i++;
			}
			if (pos - 1 == i)
			{
				Node* NewNode = new Node;
				NewNode->val = val;
				Node* tempNode = curr->next;
				curr->next = NewNode;
				NewNode->next = tempNode;

			}
		}
	}
	void DeleteFromPos(int pos)
	{
		int i = 0;
		if (root == null)
		{
			return;
		}

		if (pos == 0)
		{
			Node* NewNode = root;
			root = NewNode->next;
			delete NewNode;
		}
		else
		{
			Node* curr = root;
			while (curr->next != null && pos - 1 > i)
			{
				curr = curr->next;
				i++;
			}

			if (pos - 1 == i && curr->next != null)
			{
				Node* tempNode = curr->next;
				curr->next = curr->next->next;
				delete tempNode;

			}

		}
	}

	void Update(int pos,int val)
	{
		if (root == null)
		{
			return;
		}
		int i = 0;
		Node* curr = root;
		while (curr->next != null && pos  > i)
		{
			curr = curr->next;
		}
		if (pos == i)
		{
			curr->val =val;
		}
	}
};