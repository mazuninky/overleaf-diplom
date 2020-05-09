void *Thread1(void *x) {
    pthread_mutex_lock(&mutex);
    pthread_mutex_lock(&mutex);
}