// Copyright (c) 2014, Cornell University
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of HyperDex nor the names of its contributors may be
//       used to endorse or promote products derived from this software without
//       specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

// GENERATED!  Do not modify this file directly

NODE_SET_PROTOTYPE_METHOD(tpl, "get", HyperDexClient::get);
NODE_SET_PROTOTYPE_METHOD(tpl, "put", HyperDexClient::put);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_put", HyperDexClient::cond_put);
NODE_SET_PROTOTYPE_METHOD(tpl, "put_if_not_exist", HyperDexClient::put_if_not_exist);
NODE_SET_PROTOTYPE_METHOD(tpl, "del", HyperDexClient::del);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_del", HyperDexClient::cond_del);
NODE_SET_PROTOTYPE_METHOD(tpl, "atomic_add", HyperDexClient::atomic_add);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_atomic_add", HyperDexClient::cond_atomic_add);
NODE_SET_PROTOTYPE_METHOD(tpl, "atomic_sub", HyperDexClient::atomic_sub);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_atomic_sub", HyperDexClient::cond_atomic_sub);
NODE_SET_PROTOTYPE_METHOD(tpl, "atomic_mul", HyperDexClient::atomic_mul);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_atomic_mul", HyperDexClient::cond_atomic_mul);
NODE_SET_PROTOTYPE_METHOD(tpl, "atomic_div", HyperDexClient::atomic_div);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_atomic_div", HyperDexClient::cond_atomic_div);
NODE_SET_PROTOTYPE_METHOD(tpl, "atomic_mod", HyperDexClient::atomic_mod);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_atomic_mod", HyperDexClient::cond_atomic_mod);
NODE_SET_PROTOTYPE_METHOD(tpl, "atomic_and", HyperDexClient::atomic_and);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_atomic_and", HyperDexClient::cond_atomic_and);
NODE_SET_PROTOTYPE_METHOD(tpl, "atomic_or", HyperDexClient::atomic_or);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_atomic_or", HyperDexClient::cond_atomic_or);
NODE_SET_PROTOTYPE_METHOD(tpl, "atomic_xor", HyperDexClient::atomic_xor);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_atomic_xor", HyperDexClient::cond_atomic_xor);
NODE_SET_PROTOTYPE_METHOD(tpl, "string_prepend", HyperDexClient::string_prepend);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_string_prepend", HyperDexClient::cond_string_prepend);
NODE_SET_PROTOTYPE_METHOD(tpl, "string_append", HyperDexClient::string_append);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_string_append", HyperDexClient::cond_string_append);
NODE_SET_PROTOTYPE_METHOD(tpl, "list_lpush", HyperDexClient::list_lpush);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_list_lpush", HyperDexClient::cond_list_lpush);
NODE_SET_PROTOTYPE_METHOD(tpl, "list_rpush", HyperDexClient::list_rpush);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_list_rpush", HyperDexClient::cond_list_rpush);
NODE_SET_PROTOTYPE_METHOD(tpl, "set_add", HyperDexClient::set_add);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_set_add", HyperDexClient::cond_set_add);
NODE_SET_PROTOTYPE_METHOD(tpl, "set_remove", HyperDexClient::set_remove);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_set_remove", HyperDexClient::cond_set_remove);
NODE_SET_PROTOTYPE_METHOD(tpl, "set_intersect", HyperDexClient::set_intersect);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_set_intersect", HyperDexClient::cond_set_intersect);
NODE_SET_PROTOTYPE_METHOD(tpl, "set_union", HyperDexClient::set_union);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_set_union", HyperDexClient::cond_set_union);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_add", HyperDexClient::map_add);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_add", HyperDexClient::cond_map_add);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_remove", HyperDexClient::map_remove);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_remove", HyperDexClient::cond_map_remove);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_atomic_add", HyperDexClient::map_atomic_add);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_atomic_add", HyperDexClient::cond_map_atomic_add);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_atomic_sub", HyperDexClient::map_atomic_sub);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_atomic_sub", HyperDexClient::cond_map_atomic_sub);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_atomic_mul", HyperDexClient::map_atomic_mul);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_atomic_mul", HyperDexClient::cond_map_atomic_mul);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_atomic_div", HyperDexClient::map_atomic_div);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_atomic_div", HyperDexClient::cond_map_atomic_div);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_atomic_mod", HyperDexClient::map_atomic_mod);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_atomic_mod", HyperDexClient::cond_map_atomic_mod);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_atomic_and", HyperDexClient::map_atomic_and);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_atomic_and", HyperDexClient::cond_map_atomic_and);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_atomic_or", HyperDexClient::map_atomic_or);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_atomic_or", HyperDexClient::cond_map_atomic_or);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_atomic_xor", HyperDexClient::map_atomic_xor);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_atomic_xor", HyperDexClient::cond_map_atomic_xor);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_string_prepend", HyperDexClient::map_string_prepend);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_string_prepend", HyperDexClient::cond_map_string_prepend);
NODE_SET_PROTOTYPE_METHOD(tpl, "map_string_append", HyperDexClient::map_string_append);
NODE_SET_PROTOTYPE_METHOD(tpl, "cond_map_string_append", HyperDexClient::cond_map_string_append);
NODE_SET_PROTOTYPE_METHOD(tpl, "search", HyperDexClient::search);
NODE_SET_PROTOTYPE_METHOD(tpl, "search_describe", HyperDexClient::search_describe);
NODE_SET_PROTOTYPE_METHOD(tpl, "sorted_search", HyperDexClient::sorted_search);
NODE_SET_PROTOTYPE_METHOD(tpl, "group_del", HyperDexClient::group_del);
NODE_SET_PROTOTYPE_METHOD(tpl, "count", HyperDexClient::count);