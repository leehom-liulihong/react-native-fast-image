/*
 * MIT License
 *
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GeneratePropsCpp.js
 */

#include "Props.h"
#include <react/renderer/core/PropsParserContext.h>
#include <react/renderer/core/propsConversions.h>

namespace facebook {
namespace react {
static inline std::string getHeaders(const PropsParserContext &context, const RawValue &value)
{
    auto map = (butter::map<std::string, RawValue>)value;
    std::string headers = "";
    if (!map.empty()) {
        std::string itemValue;
        headers = "{";
        for (auto iter = map.begin(); iter != map.end(); iter++) {
            fromRawValue(context, iter->second, itemValue);
            if (iter != map.begin()) {
                headers += ",";
            }
            headers += "\"" + iter->first + "\":\"" + itemValue + "\"";
        }
        headers += "}";
    }
    return headers;
}
static inline void fromRawValue(const PropsParserContext &context, const RawValue &value,
    FastImageViewSourceStruct &result)
{
    auto map = (butter::map<std::string, RawValue>)value;
    auto tmp_uri = map.find("uri");
    if (tmp_uri != map.end()) {
        fromRawValue(context, tmp_uri->second, result.uri);
    }
    auto tmp_headers = map.find("headers");
    if (tmp_headers != map.end()) {
        result.headers = getHeaders(context, tmp_headers->second);
    }
    auto tmp_priority = map.find("priority");
    if (tmp_priority != map.end()) {
        fromRawValue(context, tmp_priority->second, result.priority);
    }
    auto tmp_cache = map.find("cache");
    if (tmp_cache != map.end()) {
        fromRawValue(context, tmp_cache->second, result.cache);
    }
}
FastImageViewProps::FastImageViewProps(
    const PropsParserContext &context,
    const FastImageViewProps &sourceProps,
    const RawProps &rawProps): ViewProps(context, sourceProps, rawProps),

    source(convertRawProp(context, rawProps, "source", sourceProps.source, {})),
    resizeMode(convertRawProp(context, rawProps, "resizeMode", sourceProps.resizeMode, {ResizeMode::COVER})),
    defaultSource(convertRawProp(context, rawProps, "defaultSource", sourceProps.defaultSource, {})),
    tintColor(convertRawProp(context, rawProps, "tintColor", sourceProps.tintColor, {}))
    {}

} // namespace react
} // namespace facebook