Blockly.JavaScript['t_watch_button_setup'] = function(block) {
  var number_pin = block.getFieldValue('PIN');
  var code = `#SETUPpinMode(${number_pin}, INPUT_PULLUP);#END`;
  return code;
};

Blockly.JavaScript['t_watch_button_ispress'] = function(block) {
  var code = `button_status()#FUNCTIONbool button_status() {bool status;if(digitalRead(21) == 0) {status = true;} else {status = false;}return status;}#END`;
  return [code, Blockly.JavaScript.ORDER_NONE];
};
