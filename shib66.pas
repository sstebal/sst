Program shib66;
    uses crt;
    type mas=array[1..5,1..5] of real;
    const n=5;
          m=5;
          a:mas=((7.5,-81.3,3.48,71.83,-47.73),
                 (87.5,0,-11.8,0,-73.41),
                 (-83.06,-65.7,-58.45,25.91,-49.91),
                 (43.67,73.57,-57,0,-41.53),
                 (49.51,-0.73,19.45,27.81,-13.48));
    var b,i,j:word;

    procedure viv(x:mas);
    begin
        for i:=1 to n do begin
                             for j:=1 to n do write(x[i,j]:8:2);
                             writeln;
                         end;
    end;
    procedure obr(x:mas;var s:word);
        var p:boolean;
    begin
        for j:=1 to n do begin
                             p:=false;
                             for i:=1 to n do if x[i,j]>0 then p:=true;
                             if p then inc(s);
                         end;
    end;
Begin
    textbackground(15);textcolor(0);clrscr;
    writeln('Дан двумерный массив:');
    viv(a);
    writeln('Найти количество столбцов этого массива, содержащих хотя бы один положительный элемент.');
    viv(a);
    obr(a,b);
    writeln('Ответ:',b:3);
    readkey;
End.
