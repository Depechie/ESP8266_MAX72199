struct {
  float  Longtitude;
  float  Latitude;
  String ID;
  String Icon;
  String Main;
  String Description;
  float  Temperatur;
  String Temp_Unit;
  short  Temp_Unit_2;
  int    Wind;
  int    Humidity;
  int    Pressure;
  int    Day_Min;
  int    Day_Max;
  float  Visibility;
  char   Vis_Unit;
  float  Wind_Speed;
  short  Wind_Speed_Unit;
  short  Wind_Direction;
  char   Cardinal;
  String Condition;
  String Condition_Value;
  short  SunriseHour;
  short  SunriseMinute;
  short  SunsetHour;
  short  SunsetMinute;
  String Forecast[6];
  byte   Setting;
  bool   Enable;
  const long    refresh_delay = 600000;
  unsigned long last_refresh  = 0;
} Weather;