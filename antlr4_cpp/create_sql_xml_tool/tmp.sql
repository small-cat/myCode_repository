CREATE OR REPLACE FUNCTION "char_to_number"("char_in_1" varchar)
  RETURNS "numeric" AS $BODY$ declare   retValue numeric; begin   retValue := ascii(char_in_1);   if retValue <= 57 and retValue >= 48 then    retValue := retValue - 48;   elsif retValue < 73 and retValue >= 65 then    retValue := retValue - 55;   elsif retValue < 79 and retValue >= 74 then    retValue := retValue - 56;   elsif retValue < 83 and retValue >= 80 then    retValue := retValue - 57;   elsif retValue < 86 and retValue >= 84 then    retValue := retValue - 58;   elsif retValue < 90 and retValue >= 87 then    retValue := retValue - 59;   else    return 0;   end if;   return retValue; end; $BODY$
  LANGUAGE 'plpgsql' VOLATILE COST 100
;
