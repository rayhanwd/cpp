#include "pch.h"
#include <cstdint>
#include <iostream>
#include <array>
#include <stdexcept>
#include <sstream>
#include <functional>

    template <class A>
    class ArraySliceC
    {
    public:
        using Array_t = A;
        using value_type = typename A::value_type;
        using const_iterator = typename A::const_iterator;

        ArraySliceC(const Array_t & source, size_t ifirst, size_t length)
            : m_ifirst{ ifirst }
            , m_length{ length }
            , m_source{ source }
        {
            if (source.size() < (ifirst + length))
            {
                std::ostringstream os;
                os << "ArraySliceC::ArraySliceC(<source>,"
                    << ifirst << "," << length
                    << "): out of bounds. (ifirst + length >= <source>.size())";
                throw std::invalid_argument( os.str() );
            }
        }
        size_t size() const
        {
            return m_length;
        }
        const value_type& at( size_t index ) const
        {
            return m_source.at( m_ifirst + index );
        }
        const value_type& operator[]( size_t index ) const
        {
            return m_source[m_ifirst + index];
        }
        const_iterator cbegin() const
        {
            return m_source.cbegin() + m_ifirst;
        }
        const_iterator cend() const
        {
            return m_source.cbegin() + m_ifirst + m_length;
        }

    private:
        size_t m_ifirst;
        size_t m_length;
        const Array_t& m_source;
    };

template <class T, size_t SZ>
std::ostream& operator<<( std::ostream& os, const std::array<T,SZ>& arr )
{
    if (arr.size() == 0)
    {
        os << "[||]";
    }
    else
    {
        os << "[| " << arr.at( 0 );
        for (auto it = arr.cbegin() + 1; it != arr.cend(); it++)
        {
            os << "," << (*it);
        }
        os << " |]";
    }
    return os;
}

template<class A>
std::ostream& operator<<( std::ostream& os, const ArraySliceC<A> & slice )
{
    if (slice.size() == 0)
    {
        os <<  "^[||]";
    }
    else
    {
        os << "^[| " << slice.at( 0 );
        for (auto it = slice.cbegin() + 1; it != slice.cend(); it++)
        {
            os << "," << (*it);
        }
        os << " |]";
    }
    return os;
}

template<class A>
A unfoldArray( std::function< typename A::value_type( size_t )> producer )
{
    A result;
    for (size_t i = 0; i < result.size(); i++)
    {
        result[i] = producer( i );
    }
    return result;
}

int main()
{
    using A = std::array<float, 10>;
    auto idf = []( size_t i ) -> float { return static_cast<float>(i); };
    const auto values = unfoldArray<A>(idf);

    std::cout << "values = " << values << std::endl;

    // zero copy slice of values array.
    auto sl0 = ArraySliceC( values, 2, 4 );
    std::cout << "sl0 = " << sl0 << std::endl;

    // zero copy slice of the sl0 (the slice of values array)
    auto sl01 = ArraySliceC( sl0, 1, 2 );
    std::cout << "sl01 = " << sl01 << std::endl;

    return 0;
}
