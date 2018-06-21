//  
// Copyright (c) 2018 Yannick Schinko. All rights reserved.  
// Licensed under the MIT License. See LICENSE file in the project root for full license information.  
//  
#pragma once

#include <functional>
#include <list>

namespace anni {
	template<
		class T,
		class comparator = std::less<T>
	>
	class MinMaxTree {
	private:
		class Node {
		private:
			T value;
			std::list<Node> children;
		};

		Node root;
	};
}

// Hack for template classes
#include "min_max_tree.cpp"
