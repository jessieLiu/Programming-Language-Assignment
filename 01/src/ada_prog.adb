with Ada.Text_IO;
use Ada.Text_IO;

procedure ada_prog is
    x : integer;
begin
    x := 100;
    if x > 0 then
        Put_Line("positive");
    else
        Put_Line("non-positive");
    end if;
end ada_prog;
