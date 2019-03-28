#include <iostream>
#include <map>
#include <functional>

using namespace std;

template<typename T>
class BinaryTree {
private:
    struct Node {
        T info;
        Node *left, *right;
    };

    Node* root;

public:
    BinaryTree() : root(nullptr) {}

    void insert(const T& info)
    {
    	Node* node = root, *prev = nullptr;

    	while(node)
    	{
    		prev = node;

    		if(node->info == info)
    			return;

    		else if(info < node->info)
    			node = node->left;

    		else
    			node = node->right;
    	}

    	node = new Node {info, nullptr, nullptr };

    	if(!root)
    		root = node;

    	else if(info < prev->info)
    		prev->info = node;

    	else
    		prev->right = node;
    }

    void preorder(Node *node, function<void(Node *)>& visit)
    {
    	if(node)
    	{
    		visit(node);
    		preorder(node->left);
    		preorder(node->right);
    	}
    }

    void inorder(Node *node, function<void(Node *)>& visit)
    {
    	if(node)
    	{
    		inorder(node->left);
    		visit(node);
    		inorder(node->right);
    	}
    }

    void postorder(Node *node, function<void(Node *)>& visit)
    {
    	if(node)
    	{
    		postorder(node->left);
    		postorder(node->right);
    		visit(node);
    	}
    }
};

int main()
{
    string pre, ordem, pos;
    map<char,int> idx_ordem;

    while(cin >> pre >> ordem)
    {
        cout << pre << endl << ordem << endl;

        for(int i=0; i<ordem.size(); i++)
            idx_ordem[ordem[i]] = i;

        for(auto i : idx_ordem)
        {
            cout << i.first << " " << i.second << endl;
        }





        
    }

    return 0;
}