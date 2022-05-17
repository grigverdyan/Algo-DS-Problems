template <typename T>
size_t  Pr_Qu::Prior_Queue<T>::parent(size_t index)
{
    return (index >> 1);
}

template <typename T>
size_t  Pr_Qu::Prior_Queue<T>::left(size_t index)
{
    return (index << 1);
}

template <typename T>
size_t  Pr_Qu::Prior_Queue<T>::right(size_t index)
{
    return (index << 1 + 1);
}

template <typename T>
void  Pr_Qu::Prior_Queue<T>::shiftUp(size_t index)
{
    while (index > 0 && p_queue[parent(index)] < p_queue[index])
    {
        swap(p_queue[parent(index)], p_queue[index]);
        index = parent(index);
    }
}

template <typename T>
void    Pr_Qu::Prior_Queue<T>::shiftDown(size_t index)
{
    size_t  max_index = index;
    size_t  l_node = left(index);

    if (l_node >= 0 && p_queue[l_node] > p_queue[max_index])
        max_index = l_node;
    
    size_t  r_node = right(index);

    if (r_node >= 0 && p_queue[r_node] > p_queue[max_index])
        max_index = r_node;
    
    if (index != max_index)
    {
        swap(p_queue[index], p_queue[max_index]);
        shiftDown(max_index);
    }
}

template <typename T>
T   Pr_Qu::Prior_Queue<T>::getMax()
{
    return p_queue[0];
}

template <typename T>
T   Pr_Qu::Prior_Queue<T>::extractMax()
{
    T   res = p_queue[0];
    p_queue[0] = p_queue[p_queue.size()];    // -1 ??
    shiftDown(0);
    return res;
}

template <typename T>
void    Pr_Qu::Prior_Queue<T>::insert(T element)
{

    p_queue.push_back(element);
    shiftUp(p_queue.size() - 1);   // -1      ???
}

template <typename T>
void    Pr_Qu::Prior_Queue<T>::changePriority(size_t index, T elem)
{
    T   old_pr = p_queue[index];
    p_queue[index] = elem;

    if (elem > old_pr)
        shiftUp(index);
    else
        shiftDown(index);
}

template <typename T>
void    Pr_Qu::Prior_Queue<T>::remove(size_t index)
{
    p_queue[index] = getMax() + 1;
    shiftUp(index);
    extractMax();
}

template <typename T>
void    Pr_Qu::Prior_Queue<T>::swap(T& elem1, T& elem2)
{
    T   temp;
    temp = elem1;
    elem1 = elem2;
    elem2 = temp;
}

template <typename T>
size_t  Pr_Qu::Prior_Queue<T>::getSize()
{
    return p_queue.size();
}

template <typename T>
void    Pr_Qu::Prior_Queue<T>::display()
{
    for (auto i = 0; i < getSize(); i++)
        std::cout << p_queue[i] << " ";
}