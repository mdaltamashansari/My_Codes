
 int arr[]={36,48,24,97,12};
  //two ways of declaring and initializing a pointer to point to arrays first
  element(zeroth index)
  //int *ptr = &arr[0];
  int *ptr = arr;
  printf("value at pointer is %d\n",*ptr);
  ptr+=2;
  printf("value at pointer is %d\n",*ptr);