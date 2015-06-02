#ifndef __LINKLIST_H
#define __LINKLIST_H

namespace linklist
{
	template <typename T>
	class linklist
	{
		class node
		{
		public:
			node()
			:m_next(NULL){}
			~node(){};
			const T& value() const {return m_value;}
			void setValue(const T& value) {m_value = value;}
			linklist<T>::node* next() {return m_next;}
			void setNext(linklist<T>::node *next) {m_next = next;}
		private:
			T m_value;
			linklist<T>::node* m_next;	
		};	

	public:
		linklist();
		~linklist();
		void appendItem(const T& item);
		void insertItemAtHead(const T& item);
		int count() const;
		void removeFirstItem();
		const T& firstItem() const;
		const T& lastItem() const;
	private:
		const linklist<T>& self;
		linklist<T>::node* m_head;
		linklist<T>::node* m_tail;
		int m_count;	
	};

}

#include "linklist.cpp"
#endif
