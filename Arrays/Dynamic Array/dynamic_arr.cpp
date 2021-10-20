class DynamicArray{
    int *data;
    int nextIndex;

    int capacity;

    public:
        DynamicArray(){
            data = new int[5];
            capacity = 5;

            nextIndex = 0;
        }

        DynamicArray(DynamicArray &d){
            this->nextIndex = d.nextIndex;
            this->capacity = d.capacity;

            // d.data = this->data; Shallow copy

            this->data = new int[d.capacity];
            for(int i = 0; i < d.nextIndex; i++){
                this->data[i] = d.data[i];
            }
        }

        void operator=(DynamicArray &d){
            this->nextIndex = d.nextIndex;
            this->capacity = d.capacity;

            // d.data = this->data; Shallow copy

            this->data = new int[d.capacity];
            for(int i = 0; i < d.nextIndex; i++){
                this->data[i] = d.data[i];
            }
        }

        void add(int element){
            if(nextIndex == capacity){
                int *newData = new int[capacity*2];
                for(int i = 0; i < capacity; i++){
                    newData[i] = data[i];
                }
                delete []data;
                data = newData;
                capacity = capacity*2;
            }
            data[nextIndex] = element;
            nextIndex++;
        }

        int* getArr(){
            int* dataCopy = new int[capacity];
            for(int i = 0; i < capacity; i++){
                dataCopy[i] = data[i];
            }
            return dataCopy;
        }

        int getCapacity(){               // Returning the nextIndex because subsequent index would contain garbage values
            return nextIndex;
        }

};