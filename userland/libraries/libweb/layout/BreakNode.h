/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

// includes
#include <libweb/html/HTMLBRElement.h>
#include <libweb/layout/Node.h>

namespace Web::Layout {

class BreakNode final : public NodeWithStyleAndBoxModelMetrics {
public:
    BreakNode(DOM::Document&, HTML::HTMLBRElement&);
    virtual ~BreakNode() override;

    const HTML::HTMLBRElement& dom_node() const { return verify_cast<HTML::HTMLBRElement>(*Node::dom_node()); }

private:
    virtual void split_into_lines(InlineFormattingContext&, LayoutMode) override;
};

}
