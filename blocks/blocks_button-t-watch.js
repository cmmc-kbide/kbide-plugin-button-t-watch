Blockly.Blocks['t_watch_button_setup'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("Button sensor kits of T-Watch");
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(195);
	this.setTooltip("");
	this.setHelpUrl("");
  }
};

Blockly.Blocks['t_watch_button_ispress'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("Button isPress");
    this.setOutput(true, null);
    this.setColour(195);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};