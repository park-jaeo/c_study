//출처 : https://lazyren.github.io/devlog/vector.html

#include <cstddef>
#include <utility>

/*
Vector class Configuration

--- Member Variable ---
DEFAULT_CAP
(Template + Pointer Variable Definition) array
SIZE ( Number of elements )
CAPACITY ( the size of the storage space )

--- Member Functions ---
 - relational operators를 구현했다.
*/

template <typename T>
class Vector {
private:
    static constexpr size_t DEFAULT_CAP = 32;
    T* arr;
    size_t m_size;
    size_t m_capacity;

public:
    // Constructor
    Vector(size_t cap = DEFAULT_CAP) : arr(new T[cap]), m_size(0), m_capacity(cap) {}
    // Copy Constructor
    Vector(const Vector& v) : arr(new T[v.m_capavity]), m_size(v.m_size), m_capacity(v.m_capacity) {
        for(size_t i =0; i < m_size; i++)
            arr[i] = v[i];
    }
    // r-value Constructor
    Vector(Vector&& v) : arr(std::move(v.arr)), m_size(std::move(v.m_size)), m_capacity(std::move(v.m_capacity)){
        v.arr = nullptr;
        v.m_size = 0;
        v.m_capacity = 0;
    }
    // Destructor
    ~Vector() { delete[] arr; }
/*
--- Functions ---
*/
    // Function - operator[]
    // Return a reference to the element at position n in the vector container.

    // Vector& other 객체를 받는다.
    Vector& operator = (const Vector& other){
        if(this != &other) {
            if(m_capacity < other.m_capacity){
                delete[] arr;
                m_capacity = other.m_capacity;
                arr = new T[m_capacity];
            }
            m_size = other.m_size;
            for(size_t i=0; i < m_size; i++)
                arr[i] = other.arr[i];
        }
        return * this;
    }

    // Vector&& other 객체를 받는다.
    Vector& operator = (Vector&& other){
        std::swap(arr, other.arr);
        std::swap(m_size, other.m_size);
        std::swap(m_capacity, other.m_capacity);
        other.m_size = 0;
        return * this;
    }


    // Function - begin()
    // Return iterator to beginning.
    T* begin() const { return arr; }
    
    // Function - end()
    // Return iterator to end.
    T* end() const { return arr + m_size; }

    // Function - front()
    // Return a reference to the first element in the vector.
    T& front() { return arr[0]; }
    const T& front() const { return arr[0]; }

    // Function - back()
    // Return a reference to the last element in the vector.
    T& back() { return arr[m_size - 1]; }
    const T& back() const { return arr[m_size - 1]; }


    T& operator[](size_t idx) { return arr[idx]; }
    const T& operator[](size_t idx) const { return arr[idx]; }

    // Function - push_back(T&)
    // Adds a new element at the end of the vector, after its current
    // last element.
    void push_back(const T& val) {
        if(m_size >= m_capacity) {
            // capacity Expansion
            if(m_capacity < DEFAULT_CAP)
                m_capacity = DEFAULT_CAP;
            else
                m_capacity *= 2;
            // Replace arr with t_arr
            T* t_arr = new T[m_capacity];
            for(size_t i =0; i <m_size; i++)
                t_arr[i] = arr[i];
            delete[] arr;
            // Copy Pointer Address
            arr = t_arr;
        }
        // 1. arr[m_size]의 위치에 val을 할당한다.
        // 2. m_size를 후위 연산으로 증가시킨다.
        arr[m_size++] = val;
    }

    // PUSH PACK FUNCTION - L-VALUE
    void push_back(T&& val){
        if(m_size >= m_capacity){
            if(m_capacity < DEFAULT_CAP)
                m_capacity = DEFAULT_CAP;
            else
                m_capacity *=2;
            T* t_arr = new T[m_capacity];
            for(size_t i=0; i < m_size; i++)
                t_arr[i] = arr[i];
            delete[] arr;
            arr = t_arr;
        }
        arr[m_size++] = std::move(val);
    }

    void pop_back() { m_size = m_size > 0 ? m_size - 1 : 0; }

// 삼항 연산자 ?
// (Condition) ? (if true) : (if false)

// 선언과 정의
// 메모리 할당(O) : 정의, definition
// 메모리 할당(X) : 선언, declaration

    // Resizes the container so that it contains n elements,
    // 1. If n is smaller than current container size (size)
    //  size를 n으로 줄이고
    //  n 크기를 넘어가는 원소를 모두 삭제한다.
    // 2. If n is greater than current container size (size)
    //  size를 n으로 늘린다.
    //  n 크기를 넘어가는 원소를 모두 삭제한다.
    void resize(size_t n, T val = T()){
        // New array Definition
        T* t_arr = new T[n];
        // Member Variable Allocation
        m_size = m_size < n ? m_size : n;
        m_capacity = n;
        // Copy to New Array
        for(size_t i=0; i < m_size; i++)
            t_arr[i] = arr[i];
        for(size_t i=m_size; i < m_capacity; i++)
            t_arr[i] = val;
        // Delete Existing Array
        delete[] arr;
        // Copy Address
        arr = t_arr;
        m_size = n;
    }

    // resize와는 다르게 원소에 접근하지 않는다.
    // n이 size보다 크면 capacity를 n으로 재조정(확장)한다.
    // n이 size보다 작으면 아무일도 일어나지 않는다.
    void reserse(size_t n){
        if(n <= m_capacity)
            return;
        T *t_arr = new T[n];
        for(size_T i=0; i < m_size; i++)
            t_arr[i] = arr[i];
        delete[] arr;
        arr = t_arr;
        m_capacity = n;
    }

    void swap(Vector& other){
        std::swap(arr, other.arr);
        std::swap(m_size, other.m_size);
        std::swap(m_capacity, other.m_capacity);
    }

    // Memeber variable access function
    size_t capacity() const { return m_capacity; }
    size_t size() const { return m_size; }
    bool empty() const { return m_size = 0; }
    void clear() { m_size = 0; }

    bool operator = (const Vector& other) const{
        if(m_size != other.m_size)
            return false;
        for(size_t i=0; i < m_size; i++)
            if(arr[i] != other[i])
                return false;
        return true;
    }
    bool operator != (const Vector& other) const { return !(*this = other); }
    bool operator < (const Vector& other) const {
        bool is_all_same = true;
        size_t min_size = m_size < other.m_size ? m_size : other.m_size;
        size_t idx = 0;
        for(; idx < min_size; idx++){
            if(arr[idx] != other[idx]){
                is_all_same = false;
                break;
            }
        }

        if(is_all_same){
            if(m_size < other.m_size)
                return true;
        }
        else{
            if(arr[idx] < other[idx])
                return true;
        }
        return false;
    }
    bool operator <= (const Vector& other) const { return !(other < *this); }
    bool operator > (const Vector& other) const { return (other < *this); }
    bool operator >= (const Vector& other) const { return !(*this < *this); }
    





};