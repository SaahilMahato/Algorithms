# Author: Saahil Mahato

from treelib import Node, Tree

def tuple_to_string(tup):
    return f"{tup[0]},{tup[1]},{tup[2]}"

def is_valid(tup):
    return (0 <= tup[0] <= 3) and (0 <= tup[1] <= 3)

def game_over(tup):
    left_side = (node[0], node[1])
    right_side = (3-node[0], 3-node[1])
    return (left_side[1] > left_side[0]) or (right_side[1] > left_side[0])

def game_won(tup):
    return tup[0] == 0 and tup[1] == 0

def place_in_tree(temp_node):
    global node_id
    if not is_valid(temp_node):
        return
    elif game_over(temp_node) or game_won(temp_node):
        tree.create_node(tuple_to_string(temp_node), temp_node, parent=node)
    else:
        all_nodes.append(temp_node)
        tree.create_node(tuple_to_string(temp_node), temp_node, parent=node)
    node_id += 1


if __name__ == '__main__':
    tree = Tree()
    node_id = 0
    root_node = (3,3,1,node_id)
    all_nodes = [root_node]
    tree.create_node(tuple_to_string(root_node), root_node)

    depth = int(input("Enter the depth: "))

    for node in all_nodes:
        if node[2] == 1:
            temp_node = (node[0]-1, node[1]-1, 0, node_id)
            place_in_tree(temp_node)
            if tree.depth() > depth:
                tree.remove_node(temp_node)
                break
            temp_node = (node[0]-2, node[1], 0, node_id)
            place_in_tree(temp_node)
            temp_node = (node[0], node[1]-2, 0, node_id)
            place_in_tree(temp_node)
            temp_node = (node[0]-1, node[1], 0, node_id)
            place_in_tree(temp_node)
            temp_node = (node[0], node[1]-1, 0, node_id)
            place_in_tree(temp_node)
        else:
            temp_node = (node[0]+1, node[1]+1, 1, node_id)
            place_in_tree(temp_node)
            if tree.depth() > depth:
                tree.remove_node(temp_node)
                break
            temp_node = (node[0]+2, node[1], 1, node_id)
            place_in_tree(temp_node)
            temp_node = (node[0], node[1]+2, 1, node_id)
            place_in_tree(temp_node)
            temp_node = (node[0]+1, node[1], 1, node_id)
            place_in_tree(temp_node)
            temp_node = (node[0], node[1]+1, 1, node_id)
            place_in_tree(temp_node)

tree.show()