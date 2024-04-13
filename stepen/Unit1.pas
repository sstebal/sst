Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    textBox1: TextBox;
    textBox2: TextBox;
    textBox3: TextBox;
    label1: &Label;
    label2: &Label;
    label3: &Label;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

function Power(base, exponent: integer): integer;

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


procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin


end;

end.
