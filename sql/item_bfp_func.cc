#include "item_bfp_func.h"
#include "sql/item.h"
#include "sql/item_func.h"

longlong Item_func_start_bfp_count::val_int() {

  null_value = false;
  return 114514;
}

bool Item_func_start_bfp_count::fix_fields(THD *thd, Item **ref) {
  if (Item_int_func::fix_fields(thd, ref)) return true;

  return false;
}

longlong Item_func_end_bfp_count::val_int() {
  null_value = false;
  return 114514;
}

bool Item_func_end_bfp_count::fix_fields(THD *thd, Item **ref) {
  if (Item_int_func::fix_fields(thd, ref)) return true;

  return false;
}