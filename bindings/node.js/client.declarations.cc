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

static v8::Handle<v8::Value> asynccall__spacename_key__status_attributes(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, enum hyperdex_client_returncode* status, const struct hyperdex_client_attribute** attrs, size_t* attrs_sz), const v8::Arguments& args);
static v8::Handle<v8::Value> asynccall__spacename_key_attributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute* attrs, size_t attrs_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args);
static v8::Handle<v8::Value> asynccall__spacename_key_predicates_attributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, const struct hyperdex_client_attribute* attrs, size_t attrs_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args);
static v8::Handle<v8::Value> asynccall__spacename_key__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args);
static v8::Handle<v8::Value> asynccall__spacename_key_predicates__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args);
static v8::Handle<v8::Value> asynccall__spacename_key_mapattributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_map_attribute* mapattrs, size_t mapattrs_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args);
static v8::Handle<v8::Value> asynccall__spacename_key_predicates_mapattributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, const struct hyperdex_client_map_attribute* mapattrs, size_t mapattrs_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args);
static v8::Handle<v8::Value> iterator__spacename_predicates__status_attributes(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status, const struct hyperdex_client_attribute** attrs, size_t* attrs_sz), const v8::Arguments& args);
static v8::Handle<v8::Value> asynccall__spacename_predicates__status_description(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status, const char** description), const v8::Arguments& args);
static v8::Handle<v8::Value> iterator__spacename_predicates_sortby_limit_maxmin__status_attributes(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, const char* sort_by, uint64_t limit, int maxmin, enum hyperdex_client_returncode* status, const struct hyperdex_client_attribute** attrs, size_t* attrs_sz), const v8::Arguments& args);
static v8::Handle<v8::Value> asynccall__spacename_predicates__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args);
static v8::Handle<v8::Value> asynccall__spacename_predicates__status_count(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status, uint64_t* count), const v8::Arguments& args);

static v8::Handle<v8::Value> get(const v8::Arguments& args);
static v8::Handle<v8::Value> put(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_put(const v8::Arguments& args);
static v8::Handle<v8::Value> put_if_not_exist(const v8::Arguments& args);
static v8::Handle<v8::Value> del(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_del(const v8::Arguments& args);
static v8::Handle<v8::Value> atomic_add(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_atomic_add(const v8::Arguments& args);
static v8::Handle<v8::Value> atomic_sub(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_atomic_sub(const v8::Arguments& args);
static v8::Handle<v8::Value> atomic_mul(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_atomic_mul(const v8::Arguments& args);
static v8::Handle<v8::Value> atomic_div(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_atomic_div(const v8::Arguments& args);
static v8::Handle<v8::Value> atomic_mod(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_atomic_mod(const v8::Arguments& args);
static v8::Handle<v8::Value> atomic_and(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_atomic_and(const v8::Arguments& args);
static v8::Handle<v8::Value> atomic_or(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_atomic_or(const v8::Arguments& args);
static v8::Handle<v8::Value> atomic_xor(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_atomic_xor(const v8::Arguments& args);
static v8::Handle<v8::Value> string_prepend(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_string_prepend(const v8::Arguments& args);
static v8::Handle<v8::Value> string_append(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_string_append(const v8::Arguments& args);
static v8::Handle<v8::Value> list_lpush(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_list_lpush(const v8::Arguments& args);
static v8::Handle<v8::Value> list_rpush(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_list_rpush(const v8::Arguments& args);
static v8::Handle<v8::Value> set_add(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_set_add(const v8::Arguments& args);
static v8::Handle<v8::Value> set_remove(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_set_remove(const v8::Arguments& args);
static v8::Handle<v8::Value> set_intersect(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_set_intersect(const v8::Arguments& args);
static v8::Handle<v8::Value> set_union(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_set_union(const v8::Arguments& args);
static v8::Handle<v8::Value> map_add(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_add(const v8::Arguments& args);
static v8::Handle<v8::Value> map_remove(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_remove(const v8::Arguments& args);
static v8::Handle<v8::Value> map_atomic_add(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_atomic_add(const v8::Arguments& args);
static v8::Handle<v8::Value> map_atomic_sub(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_atomic_sub(const v8::Arguments& args);
static v8::Handle<v8::Value> map_atomic_mul(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_atomic_mul(const v8::Arguments& args);
static v8::Handle<v8::Value> map_atomic_div(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_atomic_div(const v8::Arguments& args);
static v8::Handle<v8::Value> map_atomic_mod(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_atomic_mod(const v8::Arguments& args);
static v8::Handle<v8::Value> map_atomic_and(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_atomic_and(const v8::Arguments& args);
static v8::Handle<v8::Value> map_atomic_or(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_atomic_or(const v8::Arguments& args);
static v8::Handle<v8::Value> map_atomic_xor(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_atomic_xor(const v8::Arguments& args);
static v8::Handle<v8::Value> map_string_prepend(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_string_prepend(const v8::Arguments& args);
static v8::Handle<v8::Value> map_string_append(const v8::Arguments& args);
static v8::Handle<v8::Value> cond_map_string_append(const v8::Arguments& args);
static v8::Handle<v8::Value> search(const v8::Arguments& args);
static v8::Handle<v8::Value> search_describe(const v8::Arguments& args);
static v8::Handle<v8::Value> sorted_search(const v8::Arguments& args);
static v8::Handle<v8::Value> group_del(const v8::Arguments& args);
static v8::Handle<v8::Value> count(const v8::Arguments& args);