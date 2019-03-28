#include <iostream>
#include <map>
#include <functional>

using namespace std;

map<int, char> int_to_char;


template<typename T>
class BinaryTree {
private:
    struct Node {
        T info;
        Node *left, *right;
    };

    Node* root;

    void postorder(Node *node)
    {
        if(node)
        {
            postorder(node->left);
            postorder(node->right);
            cout << int_to_char[node->info];
        }
    }

public:

    void show() {
        postorder(root);
    }

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
    		prev->left = node;

    	else
    		prev->right = node;
    }

    
};

int main()
{
    string pre, ordem, pos;
    map<char,int> idx_ordem;

    while(cin >> pre >> ordem)
    {
        for(int i=0; i<ordem.size(); i++)
        {
            idx_ordem[ordem[i]] = i;
            int_to_char[i] = ordem[i];
        }

        BinaryTree<int> tree;

        for(int i=0; i<pre.size(); i++)
            tree.insert( idx_ordem[pre[i]] );

        tree.show();

        cout << "\n";
        
    }

    return 0;
}