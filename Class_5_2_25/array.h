#ifndef _TEMPLATE_ARRAY_H_
#define _TEMPLATE_ARRAY_H_
template <class T>
class Array
{
   private:
        T *m_list;
        int m_length;

   public:
        Array() //default constructor
        {
           m_list = nullptr;
           m_length = 0;
        }


        Array(int length)
        {
          m_list = new T[length];
          m_length = length;
        }

        ~Array()
        {
            delete[] m_list;
            m_list = nullptr;
        }

        int getLength()
        { return m_length; }
        
        T getElement(const int pos)
        { return m_list[pos]; }
};
#endif