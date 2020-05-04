#ifndef ___BaseScene_HPP___
#define ___BaseScene_HPP___

/**
 * @brief
 * シーンの基底となるクラス
 */

class BaseScene {
public:
	BaseScene()  {};
	BaseScene(const BaseScene &) {};
	BaseScene &operator=(const BaseScene &)
	{
		return *this;
	};

	virtual ~BaseScene() {};

public:
	virtual void Init()   = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;
	virtual void Final()  = 0;

public:
	BaseScene* GetNextScene() const 
	{
		return this->m_NextScene;
	};

public:
	BaseScene* m_NextScene;
};

#endif // !___BaseScene_HPP___