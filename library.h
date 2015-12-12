#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{  
int data;
struct tree *left,*right;
int ht;
}tree;


struct node
{
int info;
struct node *link;
};


void enqueue_circ ( struct node **, struct node **, int ) ;
void dequeue_circ ( struct node **, struct node ** ) ;
void display_circ ( struct node * ) ;
tree* tree_node();
void tree_basic();
void tower_of_hanoi();
void TOH(int,char,char,char);
void stacks();
void sort(int x[],int ,int );
void selection_sort();
void search(struct node *,int);
tree * RR(tree *);
tree * rotateright(tree *);
tree * rotateleft(tree *);
tree * RL(tree *);
struct node * reverse(struct node *);
void quick_sort();
struct node * push(int ,struct node *);
void preorder(tree *);
void postorder(tree *);
struct node * pop(struct node *); 
tree * LR(tree *);
tree * LL(tree *);
void linked_list();
struct node * ith(int,struct node *);
tree * insert_avl(tree *,int);
tree * insert(tree *,int);
struct node * ins_ele(int,struct node *);
void inorder(tree *);
int height(tree *);
struct node * first(int,struct node *);
struct node * end(int,struct node *);
void display_tree(tree *);
void display_stack(struct node *);
void display_circular(struct node *);
void display(struct node *);
int diff(tree *);
struct node * del_last(struct node *);
struct node * del_ith(int i,struct node *);
struct node * del_first(struct node *);
tree * delete_avl(tree *,int);
tree * delete(tree *,int);
struct node * del_ele(struct node *);
struct node * del_all(struct node *);
tree * create_tree(tree *);
void create_normal(tree *);
struct node * create_node();
struct node * create_circular(struct node *,struct node *);
struct node * create(int,struct node *);
void circular_list();
void bubble_sort();
void bst();
void bin_search();
void avl();
void treemain();
void sortmain();
void queuemain();
void linkedlistmain();
void circ_queue( );
void dequeue(struct node **);
void display_queue(struct node *);
void enqueue(int,struct node **,struct node **);
void queue();
void main_1();
void bye();
