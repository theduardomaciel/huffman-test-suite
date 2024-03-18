#include "priority_queue_test.h"
#include "huffman_tree.h"

int compare_int(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

void pq_init_test(void)
{
    priority_queue *pq = pq_init(10, compare_int);

    CU_ASSERT_PTR_NOT_NULL(pq);
    CU_ASSERT_EQUAL(pq->capacity, 10);
    CU_ASSERT_EQUAL(pq->size, 0);
    CU_ASSERT_PTR_NOT_NULL(pq->data);
    CU_ASSERT_PTR_NOT_NULL(pq->comparator);

    pq_destroy(pq);
}

void pq_enqueue_test(void)
{
    priority_queue *pq = pq_init(10, compare_int);

    huffman_node *item = malloc(sizeof(huffman_node));
    item->data = 'a';
    item->frequency = 1;
    pq_enqueue(pq, item);

    item = malloc(sizeof(huffman_node));
    item->data = 'b';
    item->frequency = 2;
    pq_enqueue(pq, item);

    item = malloc(sizeof(huffman_node));
    item->data = 'c';
    item->frequency = 3;
    pq_enqueue(pq, item);
}

void pq_destroy_test(void)
{
    priority_queue *pq = pq_init(10, compare_int);

    int item = 1;
    pq_enqueue(pq, &item);
    item = 2;
    pq_enqueue(pq, &item);
    item = 3;
    pq_enqueue(pq, &item);
    item = 4;
    pq_enqueue(pq, &item);

    CU_ASSERT_EQUAL(pq->size, 4);
    CU_ASSERT_EQUAL(*(int *)pq_dequeue(pq), 1);
    CU_ASSERT_EQUAL(pq->size, 3);
    CU_ASSERT_EQUAL(*(int *)pq_dequeue(pq), 2);
    CU_ASSERT_EQUAL(pq->size, 2);
    CU_ASSERT_EQUAL(*(int *)pq_dequeue(pq), 3);
    CU_ASSERT_EQUAL(pq->size, 1);
    CU_ASSERT_EQUAL(*(int *)pq_dequeue(pq), 4);
    CU_ASSERT_EQUAL(pq->size, 0);
    CU_ASSERT_PTR_NULL(pq_dequeue(pq));

    pq_destroy(pq);
}