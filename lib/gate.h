#ifndef GATE_H
#define GATE_H


class Gate {
public:
  Gate(int initial_opening); 
  void open(int percentage);
  void close(int percentage); 
  bool isClosed() const;
  int getOpening() const;

private:
  int current_opening;
  bool gate_is_closed = true;
};

#endif // GATE_H
