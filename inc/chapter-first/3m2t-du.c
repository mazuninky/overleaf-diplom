void *Thread1(void *x) {
    pthread_mutex_lock(&mu1);
    pthread_mutex_lock(&mu2);
    pthread_mutex_lock(&mu3);
    pthread_mutex_unlock(&mu3);
    pthread_mutex_unlock(&mu2);
    pthread_mutex_unlock(&mu1);
}

void *Thread2(void *x) {
    pthread_mutex_lock(&mu1);
    pthread_mutex_lock(&mu3);
    pthread_mutex_lock(&mu2);
    pthread_mutex_unlock(&mu2);
    pthread_mutex_unlock(&mu3);
    pthread_mutex_unlock(&mu1);
}