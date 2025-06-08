#ifndef BK_BUCKETS_H
#define BK_BUCKETS_H "bk/buckets.h"

#define SIZEOF_BUCKETS 42
#define Buckets void

//struct Buckets {
//    void *first_bucket;     // 8
//    void *current_bucket;   // 8
//    void *next;             // 8
//    void *eoc;              // 8
//    void *last_alloc;       // 8
//    unsigned short nPages;  // 2
//};

#define SIZEOF_BUCKETS_CHECKPOINTY 32
#define BucketsCheckpoint void

//struct BucketsCheckpoint {
//    void *current_bucket;   // 8
//    void *next;             // 8
//    void *eoc;              // 8
//    void *last_alloc;       // 8
//};

#define SIZEOF_BUCKET_HEADER 16
#define BucketHeader void

//struct BucketHeader {
//    void *next_chunk;       // 8
//    void *eoc;              // 8
//};

//typedef struct Buckets Buckets;
//typedef struct BucketsCheckpoint BucketsCheckpoint;
//typedef struct BucketHeader BucketHeader;

void * Buckets_init(Buckets *, unsigned long chunkSize);
void * allocInBuckets(Buckets *, unsigned int n, unsigned int align);
void * reallocInBuckets(Buckets *, void* p, unsigned int n, unsigned int align);
void checkpointBuckets(Buckets *, BucketsCheckpoint *s);
void resetToCheckpoint(Buckets *, BucketsCheckpoint *s);
void cleanBuckets(void *first_bucket);
void Buckets_finalise(Buckets *);
unsigned long numBuckets(BucketHeader *first_bucket);
int inBuckets(Buckets *, void *p);
int isAlive(Buckets *, void *p);
int isDead(Buckets *, void *p);


#endif  // BK_BUCKETS_H
