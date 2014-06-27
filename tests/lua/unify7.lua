local env = environment()
local N   = Const("N")
local P   = Const("P")
env = add_decl(env, mk_var_decl("N", Type))
env = add_decl(env, mk_var_decl("P", mk_arrow(N, Bool)))
local a   = Local("a", N)
local H   = Local("H", P(a))
local t   = Pi(H, Bool)
print(env:infer_type(t))
local m   = mk_metavar("m", mk_arrow(N, N, Type))
local cs  = { mk_eq_cnstr(m(a, a), t) }

local o   = options({"unifier", "use_exceptions"}, false)
ss = unify(env, cs, o)
local n = 0
for s in ss do
   print("solution: " .. tostring(s:instantiate(m)))
   s:for_each_expr(function(n, v, j)
                      print("  " .. tostring(n) .. " := " .. tostring(v))
   end)
   s:for_each_level(function(n, v, j)
                       print("  " .. tostring(n) .. " := " .. tostring(v))
   end)
   n = n + 1
end
assert(n == 2)
