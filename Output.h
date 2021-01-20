#ifndef OUTPUT_H
#define OUTPUT_H

class Output
{
private:
	int value {0};
public:
	Output() = default;
	~Output() = default;
	virtual bool setValue(int& _output);
	virtual bool getValue(bool _isNew) const;

};


#endif