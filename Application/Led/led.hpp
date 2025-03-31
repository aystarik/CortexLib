//
// Created by SKolody on 17.10.2019.
//

#ifndef REGISTERS_LED_HPP
#define REGISTERS_LED_HPP

class ILed {
 public:
  virtual void Set() const = 0;
  virtual void Toggle() const = 0;
};

template <typename Pin>
class Led : public ILed {
 public:
  constexpr Led() = default;
  void Toggle() const override { Pin::Toggle(); }

  void Set() const override { Pin::Set(); }
};

#endif  // REGISTERS_LED_HPP
