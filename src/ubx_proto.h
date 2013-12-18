/* md5.c */
void md5(const unsigned char *input, int len, unsigned char output[16]);
/* ubx.c */
const char *block_state_tostr(int state);
const char *get_typename(ubx_data_t *data);
int ubx_module_load(ubx_node_info_t *ni, const char *lib);
void ubx_module_unload(ubx_node_info_t *ni, const char *lib);
int ubx_node_init(ubx_node_info_t *ni, const char *name);
void ubx_node_cleanup(ubx_node_info_t *ni);
int ubx_block_register(ubx_node_info_t *ni, ubx_block_t *block);
ubx_block_t *ubx_block_get(ubx_node_info_t *ni, const char *name);
ubx_block_t *ubx_block_unregister(ubx_node_info_t *ni, const char *name);
int ubx_type_register(ubx_node_info_t *ni, ubx_type_t *type);
ubx_type_t *ubx_type_unregister(ubx_node_info_t *ni, const char *name);
ubx_type_t *ubx_type_get(ubx_node_info_t *ni, const char *name);
int ubx_resolve_types(ubx_block_t *b);
ubx_data_t *ubx_data_alloc(ubx_node_info_t *ni, const char *typname, unsigned long array_len);
int ubx_data_resize(ubx_data_t *d, unsigned int newlen);
void ubx_data_free(ubx_node_info_t *ni, ubx_data_t *d);
int ubx_data_assign(ubx_data_t *tgt, ubx_data_t *src);
unsigned int data_size(ubx_data_t *d);
int ubx_num_blocks(ubx_node_info_t *ni);
int ubx_num_types(ubx_node_info_t *ni);
int ubx_num_modules(ubx_node_info_t *ni);
void ubx_port_free_data(ubx_port_t *p);
int ubx_clone_port_data(ubx_port_t *p, const char *name, const char *meta_data, ubx_type_t *in_type, unsigned long in_data_len, ubx_type_t *out_type, unsigned long out_data_len, uint32_t state);
void ubx_block_free(ubx_block_t *b);
ubx_block_t *ubx_block_create(ubx_node_info_t *ni, const char *type, const char *name);
int ubx_block_rm(ubx_node_info_t *ni, const char *name);
int ubx_port_connect_out(ubx_port_t *p, ubx_block_t *iblock);
int ubx_port_connect_in(ubx_port_t *p, ubx_block_t *iblock);
int ubx_ports_connect_uni(ubx_port_t *out_port, ubx_port_t *in_port, ubx_block_t *iblock);
int ubx_port_disconnect_out(ubx_port_t *out_port, ubx_block_t *iblock);
int ubx_port_disconnect_in(ubx_port_t *in_port, ubx_block_t *iblock);
int ubx_ports_disconnect_uni(ubx_port_t *out_port, ubx_port_t *in_port, ubx_block_t *iblock);
ubx_config_t *ubx_config_get(ubx_block_t *b, const char *name);
ubx_data_t *ubx_config_get_data(ubx_block_t *b, const char *name);
void *ubx_config_get_data_ptr(ubx_block_t *b, const char *name, unsigned int *len);
int ubx_config_add(ubx_block_t *b, const char *name, const char *meta, const char *type_name, unsigned long len);
int ubx_config_rm(ubx_block_t *b, const char *name);
int ubx_port_add(ubx_block_t *b, const char *name, const char *meta_data, const char *in_type_name, unsigned long in_data_len, const char *out_type_name, unsigned long out_data_len, uint32_t state);
int ubx_port_rm(ubx_block_t *b, const char *name);
ubx_port_t *ubx_port_get(ubx_block_t *b, const char *name);
int ubx_block_init(ubx_block_t *b);
int ubx_block_start(ubx_block_t *b);
int ubx_block_stop(ubx_block_t *b);
int ubx_block_cleanup(ubx_block_t *b);
int ubx_cblock_step(ubx_block_t *b);
uint32_t __port_read(ubx_port_t *port, ubx_data_t *data);
void __port_write(ubx_port_t *port, ubx_data_t *data);
int ubx_clock_mono_gettime(struct ubx_timespec *uts);
int ubx_ts_cmp(struct ubx_timespec *ts1, struct ubx_timespec *ts2);
void ubx_ts_norm(struct ubx_timespec *ts);
void ubx_ts_sub(struct ubx_timespec *ts1, struct ubx_timespec *ts2, struct ubx_timespec *out);
void ubx_ts_add(struct ubx_timespec *ts1, struct ubx_timespec *ts2, struct ubx_timespec *out);
void ubx_ts_div(struct ubx_timespec *ts, long div, struct ubx_timespec *out);
