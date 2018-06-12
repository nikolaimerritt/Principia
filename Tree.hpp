namespace Tree
{
	struct Node
	{
		bool isOp;
		Node* left;
		Node* right;
	};

	struct Operator : Node
	{
		isOp = true;
		
		char type;
	};

	struct Value : Node
	{
		isOp = false;
		left = nullptr;
		right = nullptr;

		double value;
	};

	class Tree
	{
	private:
		Node* root = nullptr;
	public:
		void addNode(Node);
		double eval();
	};

}