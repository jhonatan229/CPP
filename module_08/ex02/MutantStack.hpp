#if !defined(MUTANT_STACK_HPP)
#define MUTANT_STACK_HPP

#include <deque>
#include <iostream>
#include <stack>

// template< typename T, typename container = std::deque<T> >
// class MutantStack : public std::stack< T, container >
// {
// 	public:
// 		MutantStack( void ) : std::stack< T, container>( ) { return ; };
// 		MutantStack( MutantStack const & rhs ) : std::stack< T, container>( rhs ) { return ; };
// 		~MutantStack( void ) { return ; };
// 		MutantStack & operator=( MutantStack const & rhs )	{
// 			std::stack< T, container>::operator=( rhs );
// 			return ( *this );
// 		}

// 		typedef typename container::iterator iterator;

// 		typename container::iterator begin( void ) { return ( this->c.begin() ); };
// 		typename container::iterator end( void ) { return ( this->c.end() ); };
		
// };

template<typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
public:
	MutantStack() : std::stack< T, container>( ) {};
	MutantStack(MutantStack const &copy) : std::stack<T, container>( copy ) {};
	~MutantStack() {};

	MutantStack &operator=(const MutantStack &assign){ 
		std::stack<T, container>::operator=(assign);
		return *this;
	}

	typedef typename container::iterator iterator;

	typename container::iterator begin() { return ( this->c.begin() ); };
	typename container::iterator end() { return ( this->c.end() ); };
};

#endif // MUTANTSTACK_HPP
