#include <assert.h>

namespace linklist
{
	template <typename T>
	linklist<T>::linklist()
	:self(*this)
	,m_head(NULL)
	,m_tail(NULL)
	,m_count(0)
	{
	}
	
	template <typename T>
	linklist<T>::~linklist()
	{
		while(self.count()!=0)
			this->removeFirstItem();
	}
	
	template <typename T>
	void linklist<T>::appendItem(const T& item)
	{
		if (NULL == self.m_head) {
			linklist<T>::node* pnode = new linklist<T>::node();
			pnode->setValue(item);
			pnode->setNext(NULL);
			this->m_head = pnode;
			this->m_tail = pnode;
		} else {
			linklist<T>::node* pnode = new linklist<T>::node();
			pnode->setValue(item);
			pnode->setNext(NULL);
			this->m_tail->setNext(pnode);
			this->m_tail = pnode;	
		}
		this->m_count++;
	}

	template <typename T>
	void linklist<T>::insertItemAtHead(const T& item)
	{
		if (self.m_head == NULL) {
			linklist<T>::node* pnode = new linklist<T>::node();
			pnode->setValue(item);
			pnode->setNext(NULL);
			this->m_head = pnode;
			this->m_tail = pnode;
		} else {
			linklist<T>::node* pnode = new linklist<T>::node();
			pnode->setValue(item);
			pnode->setNext(NULL);
			this->m_tail->setNext(pnode);
			this->m_tail = pnode;	
		}
		this->m_count++;

	}

	template <typename T>
	int linklist<T>::count(void) const
	{
		return m_count;
	}

	template <typename T>
	const T& linklist<T>::firstItem() const
	{
		assert(self.count()!=0);
		return self.m_head->value();
	}

	template <typename T>
	const T& linklist<T>::lastItem() const
	{
		assert(self.count()!=0);
		return self.m_tail->value();
	}

	template <typename T>
	void linklist<T>::removeFirstItem()
	{
		assert(self.count()!=0);
		linklist<T>::node* pnode = self.m_head;
		this->m_head = self.m_head->next();
		delete pnode;
		this->m_count --;
	}
}

