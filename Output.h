#ifndef OUTPUT_H
#define OUTPUT_H
#define MAX_VAL 65536
class Output
{

private:
	int value {0};

public:
	Output() = default;
	~Output() = default;
	virtual bool setOutput(int& _output);
	int getValue();

protected:
	bool setValue(int& _value);
	
};

#endif