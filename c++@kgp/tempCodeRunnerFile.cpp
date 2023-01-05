int main()
{
    int arr[]={3,6,8,4,1,9,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    //creating bst
    BST bst(arr,n);
    cout<<"\nInorder traversal"<<endl;
    bst.inorder(bst.getroot());
    cout<<"\nPreorder traversal"<<endl;
    bst.preorder(bst.getroot());
    cout<<"\nrinserting 7";
    bst.rinsert(bst.getroot(),7);
    cout<<"\nInorder traversal"<<endl;
    bst.inorder(bst.getroot());
    cout<<"\nPreorder traversal"<<endl;
    bst.preorder(bst.getroot());
    //deletion
    bst.deletion(bst.getroot(),6);
    cout<<"\nInorder traversal"<<endl;
    bst.inorder(bst.getroot());
    cout<<"\nPreorder traversal"<<endl;
    bst.preorder(bst.getroot());
    cout<<"\nLevel order traversal:"<<endl;
    bst.printlevelorder(bst.getroot());
    return 0;
}