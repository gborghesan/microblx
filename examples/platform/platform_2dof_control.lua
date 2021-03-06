return block
{
   name="platform_2dof_control",
   license="MIT",
   meta_data="",
   port_cache=true,

   configurations= {
      { name="gain", type_name="double", min=1, max=1 },
      { name="target_pos", type_name="double", min=2, max=2 },
   },

   ports = {
      { name="measured_pos", in_type_name="double", in_data_len=2, doc="measured position [m]" },
      { name="commanded_vel", out_type_name="double", out_data_len=2, doc="desired velocity [m/s]" },
   },

   operations = { step=true }
}
