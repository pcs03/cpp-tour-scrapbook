// struct
struct Vector {
    double *elem;
    int size;
};

void vector_init(Vector &v, int size) {
    v.elem = new double[size];
    v.size = size;
}

int main() {
    Vector vec;
    vector_init(vec, 10);
}
