#include "solution1.hpp"

Node* Solution::copyRandomList(Node* head) {
	// Edge case (no list)
	if (!head) return nullptr;

	// Copy head
	auto copy_head{new Node(head->val)};

	// Setup
	auto original_node{head};
	auto copy_node{copy_head};
	std::unordered_map<Node*, Node*> created_nodes;
	created_nodes.emplace(original_node, copy_node);

	while (original_node->next) {
		// Next pointer
		// If next points to a future Node, point to it, otherwise create a new Node
		auto created_node_search{created_nodes.find(original_node->next)};
		if (created_node_search != created_nodes.end()) {
			copy_node->next = created_node_search->second;
		} else {
			copy_node->next = new Node(original_node->next->val);
			created_nodes.emplace(original_node->next, copy_node->next);
		}

		// Random pointer
		// If random points to a past node, point to it, otherwise create a new Node and store it in future nodes
		if (original_node->random != nullptr) {
			created_node_search = created_nodes.find(original_node->random);
			if (created_node_search != created_nodes.end()) {
				copy_node->random = created_node_search->second;
			} else {
				copy_node->random = new Node(original_node->random->val);
				created_nodes.emplace(original_node->random, copy_node->random);
			}
		}

		// Move to next
		original_node = original_node->next;
		copy_node = copy_node->next;
	}

	// Do final random pointer
	if (original_node->random == nullptr) {
		copy_node->random = nullptr;
	} else {
		copy_node->random = created_nodes.find(original_node->random)->second;
	}

	return copy_head;
}