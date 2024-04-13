Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation
program FastPower;

function Power(base, exponent: integer): integer;
var
  result: integer;
begin
  result := 1;
  while exponent > 0 do
  begin
    if exponent mod 2 = 1 then
      result := result * base;
    base := base * base;
    exponent := exponent div 2;
  end;
  Power := result;
end;

var
  base, exponent: integer;

begin
  writeln('Enter base: ');
  readln(base);
  writeln('Enter exponent: ');
  readln(exponent);
  
  writeln(base, ' raised to the power of ', exponent, ' is ', Power(base, exponent));
end.

end.
