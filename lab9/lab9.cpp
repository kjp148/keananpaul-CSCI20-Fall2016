#include <iostream>
using namespace std;

class TemperatureConverter {
  public://.
  
    TemperatureConverter(double entry) { //Overloaded
      kelvin = entry;
    }
    
    TemperatureConverter() { //Default
      kelvin = 0;
    }
    
    void SetTempFromKelvin(double entered_temp) { //Sets the user value to kelvin
      kelvin = entered_temp;
    }
    
    void SetTempFromCelsius(double entered_temp) { //Converts the user value to kelvin then assigns it
      kelvin = entered_temp + 273.15;
    }
    
    void SetTempFromFahrenheit(double entered_temp) { //Converts the user value to kelvin then assigns it
      kelvin = ((5 * (entered_temp - 32) / 9) + 273.15);
    }
    
    double GetTempFromKelvin() { //Returns the value of kelvin
      return kelvin;
    }
    
    double GetTempAsCelsius() { //Returns the value of kelvin converted to celcius
      return kelvin - 273.15;
    }
    
    double GetTempAsFahrenheit() { //Returns the value of kelvin converted to celcius
      return (((kelvin * 9) / 5 + 32) - 273.15);
    }
    
    void PrintTemps() {
      cout << "^ Public Kelvin call" << endl;
      cout << "Kelvin:     " << GetTempFromKelvin() << endl;
      cout << "Celsius:    " << GetTempAsCelsius() << endl;
      cout << "Fahrenheit: " << GetTempAsFahrenheit() << endl;
      cout << endl;
    }
    
  private:
  
    double kelvin;
};
