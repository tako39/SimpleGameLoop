#ifndef ___BaseScene_HPP___
#define ___BaseScene_HPP___

/**
 * @brief
 * シーンの基底となるクラス
 */

class BaseScene {
public:
	BaseScene() = default;
	BaseScene(const BaseScene& b) = default;
	BaseScene& operator=(const BaseScene&) = default;

	virtual ~BaseScene() {}
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