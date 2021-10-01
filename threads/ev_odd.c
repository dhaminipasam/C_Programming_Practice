
#include<stdio.h>
#include<pthread.h>

#define MAX_NUM 50
pthread_t tid[2];
pthread_mutex_t mutex;
int num=1;
int count=0;

void *print_even()
{
    pthread_mutex_lock(&mutex);
    do{
        if (num %2 == 0)
        {
            printf("thread1:");
            printf("%d\n",num++);
            count++;
        }
        else pthread_mutex_unlock(&mutex);
    }while(num <= MAX_NUM);
    
}
void *print_odd()
{
    pthread_mutex_lock(&mutex);
    do{
        if (num %2 != 0)
        {
            printf("thread2:");
            printf("%d\n",num++);
            count++;
        }
        else pthread_mutex_unlock(&mutex);
    }while(num <= MAX_NUM);
    
}

int main()
{
    int ret;
    ret=pthread_create(&tid[0],0,&print_even,0);
    printf("ret1=%d\n",ret);
    ret=pthread_create(&tid[1],0,&print_odd,0);
    printf("ret1=%d\n",ret);
    pthread_join(tid[1],NULL);
}


