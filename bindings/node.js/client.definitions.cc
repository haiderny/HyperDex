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

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_key__status_attributes(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, enum hyperdex_client_returncode* status, const struct hyperdex_client_attribute** attrs, size_t* attrs_sz), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const char* in_key;
    size_t in_key_sz;
    v8::Local<v8::Value> key = args[1];
    if (!op->convert_key(key, &in_key, &in_key_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[2].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_key, in_key_sz, &op->status, &op->attrs, &op->attrs_sz);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status_attributes;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_key_attributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute* attrs, size_t attrs_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const char* in_key;
    size_t in_key_sz;
    v8::Local<v8::Value> key = args[1];
    if (!op->convert_key(key, &in_key, &in_key_sz)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute* in_attrs;
    size_t in_attrs_sz;
    v8::Local<v8::Value> attributes = args[2];
    if (!op->convert_attributes(attributes, &in_attrs, &in_attrs_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[3].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_key, in_key_sz, in_attrs, in_attrs_sz, &op->status);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_key_predicates_attributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, const struct hyperdex_client_attribute* attrs, size_t attrs_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const char* in_key;
    size_t in_key_sz;
    v8::Local<v8::Value> key = args[1];
    if (!op->convert_key(key, &in_key, &in_key_sz)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    v8::Local<v8::Value> predicates = args[2];
    if (!op->convert_predicates(predicates, &in_checks, &in_checks_sz)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute* in_attrs;
    size_t in_attrs_sz;
    v8::Local<v8::Value> attributes = args[3];
    if (!op->convert_attributes(attributes, &in_attrs, &in_attrs_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[4].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_key, in_key_sz, in_checks, in_checks_sz, in_attrs, in_attrs_sz, &op->status);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_key__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const char* in_key;
    size_t in_key_sz;
    v8::Local<v8::Value> key = args[1];
    if (!op->convert_key(key, &in_key, &in_key_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[2].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_key, in_key_sz, &op->status);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_key_predicates__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const char* in_key;
    size_t in_key_sz;
    v8::Local<v8::Value> key = args[1];
    if (!op->convert_key(key, &in_key, &in_key_sz)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    v8::Local<v8::Value> predicates = args[2];
    if (!op->convert_predicates(predicates, &in_checks, &in_checks_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[3].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_key, in_key_sz, in_checks, in_checks_sz, &op->status);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_key_mapattributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_map_attribute* mapattrs, size_t mapattrs_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const char* in_key;
    size_t in_key_sz;
    v8::Local<v8::Value> key = args[1];
    if (!op->convert_key(key, &in_key, &in_key_sz)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_map_attribute* in_mapattrs;
    size_t in_mapattrs_sz;
    v8::Local<v8::Value> mapattributes = args[2];
    if (!op->convert_mapattributes(mapattributes, &in_mapattrs, &in_mapattrs_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[3].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_key, in_key_sz, in_mapattrs, in_mapattrs_sz, &op->status);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_key_predicates_mapattributes__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const char* key, size_t key_sz, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, const struct hyperdex_client_map_attribute* mapattrs, size_t mapattrs_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const char* in_key;
    size_t in_key_sz;
    v8::Local<v8::Value> key = args[1];
    if (!op->convert_key(key, &in_key, &in_key_sz)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    v8::Local<v8::Value> predicates = args[2];
    if (!op->convert_predicates(predicates, &in_checks, &in_checks_sz)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_map_attribute* in_mapattrs;
    size_t in_mapattrs_sz;
    v8::Local<v8::Value> mapattributes = args[3];
    if (!op->convert_mapattributes(mapattributes, &in_mapattrs, &in_mapattrs_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[4].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_key, in_key_sz, in_checks, in_checks_sz, in_mapattrs, in_mapattrs_sz, &op->status);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: iterator__spacename_predicates__status_attributes(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status, const struct hyperdex_client_attribute** attrs, size_t* attrs_sz), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    v8::Local<v8::Value> predicates = args[1];
    if (!op->convert_predicates(predicates, &in_checks, &in_checks_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[2].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 3)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_checks, in_checks_sz, &op->status, &op->attrs, &op->attrs_sz);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_iterator_status_attributes;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_predicates__status_description(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status, const char** description), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    v8::Local<v8::Value> predicates = args[1];
    if (!op->convert_predicates(predicates, &in_checks, &in_checks_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[2].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_checks, in_checks_sz, &op->status, &op->description);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status_description;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: iterator__spacename_predicates_sortby_limit_maxmin__status_attributes(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, const char* sort_by, uint64_t limit, int maxmin, enum hyperdex_client_returncode* status, const struct hyperdex_client_attribute** attrs, size_t* attrs_sz), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    v8::Local<v8::Value> predicates = args[1];
    if (!op->convert_predicates(predicates, &in_checks, &in_checks_sz)) return scope.Close(v8::Undefined());
    const char* in_sort_by;
    v8::Local<v8::Value> sortby = args[2];
    if (!op->convert_sortby(sortby, &in_sort_by)) return scope.Close(v8::Undefined());
    uint64_t in_limit;
    v8::Local<v8::Value> limit = args[3];
    if (!op->convert_limit(limit, &in_limit)) return scope.Close(v8::Undefined());
    int in_maxmin;
    v8::Local<v8::Value> maxmin = args[4];
    if (!op->convert_maxmin(maxmin, &in_maxmin)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[5].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 3)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_checks, in_checks_sz, in_sort_by, in_limit, in_maxmin, &op->status, &op->attrs, &op->attrs_sz);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_iterator_status_attributes;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_predicates__status(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    v8::Local<v8::Value> predicates = args[1];
    if (!op->convert_predicates(predicates, &in_checks, &in_checks_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[2].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_checks, in_checks_sz, &op->status);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}

v8::Handle<v8::Value>
HyperDexClient :: asynccall__spacename_predicates__status_count(int64_t (*f)(struct hyperdex_client* client, const char* space, const struct hyperdex_client_attribute_check* checks, size_t checks_sz, enum hyperdex_client_returncode* status, uint64_t* count), const v8::Arguments& args)
{
    v8::HandleScope scope;
    v8::Local<v8::Object> client_obj = args.This();
    HyperDexClient* client = node::ObjectWrap::Unwrap<HyperDexClient>(client_obj);
    e::intrusive_ptr<Operation> op(new Operation(client_obj, client));
    const char* in_space;
    v8::Local<v8::Value> spacename = args[0];
    if (!op->convert_spacename(spacename, &in_space)) return scope.Close(v8::Undefined());
    const struct hyperdex_client_attribute_check* in_checks;
    size_t in_checks_sz;
    v8::Local<v8::Value> predicates = args[1];
    if (!op->convert_predicates(predicates, &in_checks, &in_checks_sz)) return scope.Close(v8::Undefined());
    v8::Local<v8::Function> func = args[2].As<v8::Function>();

    if (func.IsEmpty() || !func->IsFunction())
    {
        v8::ThrowException(v8::String::New("Callback must be a function"));
        return scope.Close(v8::Undefined());
    }

    if (!op->set_callback(func, 2)) { return scope.Close(v8::Undefined()); }
    op->reqid = f(client->client(), in_space, in_checks, in_checks_sz, &op->status, &op->count);

    if (op->reqid < 0)
    {
        op->callback_error_from_status();
        return scope.Close(v8::Undefined());
    }

    op->encode_return = &Operation::encode_asynccall_status_count;
    client->add(op->reqid, op);
    return scope.Close(v8::Undefined());
}


v8::Handle<v8::Value>
HyperDexClient :: get(const v8::Arguments& args)
{
    return asynccall__spacename_key__status_attributes(hyperdex_client_get, args);
}

v8::Handle<v8::Value>
HyperDexClient :: put(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_put, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_put(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_put, args);
}

v8::Handle<v8::Value>
HyperDexClient :: put_if_not_exist(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_put_if_not_exist, args);
}

v8::Handle<v8::Value>
HyperDexClient :: del(const v8::Arguments& args)
{
    return asynccall__spacename_key__status(hyperdex_client_del, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_del(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates__status(hyperdex_client_cond_del, args);
}

v8::Handle<v8::Value>
HyperDexClient :: atomic_add(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_atomic_add, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_atomic_add(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_add, args);
}

v8::Handle<v8::Value>
HyperDexClient :: atomic_sub(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_atomic_sub, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_atomic_sub(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_sub, args);
}

v8::Handle<v8::Value>
HyperDexClient :: atomic_mul(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_atomic_mul, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_atomic_mul(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_mul, args);
}

v8::Handle<v8::Value>
HyperDexClient :: atomic_div(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_atomic_div, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_atomic_div(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_div, args);
}

v8::Handle<v8::Value>
HyperDexClient :: atomic_mod(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_atomic_mod, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_atomic_mod(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_mod, args);
}

v8::Handle<v8::Value>
HyperDexClient :: atomic_and(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_atomic_and, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_atomic_and(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_and, args);
}

v8::Handle<v8::Value>
HyperDexClient :: atomic_or(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_atomic_or, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_atomic_or(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_or, args);
}

v8::Handle<v8::Value>
HyperDexClient :: atomic_xor(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_atomic_xor, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_atomic_xor(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_atomic_xor, args);
}

v8::Handle<v8::Value>
HyperDexClient :: string_prepend(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_string_prepend, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_string_prepend(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_string_prepend, args);
}

v8::Handle<v8::Value>
HyperDexClient :: string_append(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_string_append, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_string_append(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_string_append, args);
}

v8::Handle<v8::Value>
HyperDexClient :: list_lpush(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_list_lpush, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_list_lpush(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_list_lpush, args);
}

v8::Handle<v8::Value>
HyperDexClient :: list_rpush(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_list_rpush, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_list_rpush(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_list_rpush, args);
}

v8::Handle<v8::Value>
HyperDexClient :: set_add(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_set_add, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_set_add(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_set_add, args);
}

v8::Handle<v8::Value>
HyperDexClient :: set_remove(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_set_remove, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_set_remove(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_set_remove, args);
}

v8::Handle<v8::Value>
HyperDexClient :: set_intersect(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_set_intersect, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_set_intersect(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_set_intersect, args);
}

v8::Handle<v8::Value>
HyperDexClient :: set_union(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_set_union, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_set_union(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_set_union, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_add(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_add, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_add(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_add, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_remove(const v8::Arguments& args)
{
    return asynccall__spacename_key_attributes__status(hyperdex_client_map_remove, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_remove(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_attributes__status(hyperdex_client_cond_map_remove, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_atomic_add(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_add, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_atomic_add(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_add, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_atomic_sub(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_sub, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_atomic_sub(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_sub, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_atomic_mul(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_mul, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_atomic_mul(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_mul, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_atomic_div(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_div, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_atomic_div(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_div, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_atomic_mod(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_mod, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_atomic_mod(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_mod, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_atomic_and(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_and, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_atomic_and(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_and, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_atomic_or(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_or, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_atomic_or(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_or, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_atomic_xor(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_atomic_xor, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_atomic_xor(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_atomic_xor, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_string_prepend(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_string_prepend, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_string_prepend(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_string_prepend, args);
}

v8::Handle<v8::Value>
HyperDexClient :: map_string_append(const v8::Arguments& args)
{
    return asynccall__spacename_key_mapattributes__status(hyperdex_client_map_string_append, args);
}

v8::Handle<v8::Value>
HyperDexClient :: cond_map_string_append(const v8::Arguments& args)
{
    return asynccall__spacename_key_predicates_mapattributes__status(hyperdex_client_cond_map_string_append, args);
}

v8::Handle<v8::Value>
HyperDexClient :: search(const v8::Arguments& args)
{
    return iterator__spacename_predicates__status_attributes(hyperdex_client_search, args);
}

v8::Handle<v8::Value>
HyperDexClient :: search_describe(const v8::Arguments& args)
{
    return asynccall__spacename_predicates__status_description(hyperdex_client_search_describe, args);
}

v8::Handle<v8::Value>
HyperDexClient :: sorted_search(const v8::Arguments& args)
{
    return iterator__spacename_predicates_sortby_limit_maxmin__status_attributes(hyperdex_client_sorted_search, args);
}

v8::Handle<v8::Value>
HyperDexClient :: group_del(const v8::Arguments& args)
{
    return asynccall__spacename_predicates__status(hyperdex_client_group_del, args);
}

v8::Handle<v8::Value>
HyperDexClient :: count(const v8::Arguments& args)
{
    return asynccall__spacename_predicates__status_count(hyperdex_client_count, args);
}
