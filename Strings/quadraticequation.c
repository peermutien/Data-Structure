#include<stdio.h>
#include<conio.h>
typedef struct vnode
{ int vname;
struct vnode *vlink;
struct enode *elink;
vnode;
}
typedef struct enode
{int vname;
int eweight;
struct enode *elink;}
enode;vnode *adjlist=NULL;vnode* getvnode();enode* getenode();void insertvertex();void insertedge(int vstart,int vend);void creategraph();void viewgraph();void display_menu();void main(){char choice='y';
