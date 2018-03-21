//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZFNode.h"

@class VZFTextNodeRenderer;

@interface VZFTextNode : VZFNode
{
    VZFTextNodeRenderer *_renderer;
    struct TextNodeSpecs _textSpecs;
}

+ (id)newWithTextAttributes:(const struct TextNodeSpecs *)arg1 NodeSpecs:(const struct NodeSpecs *)arg2;
+ (id)newWithView:(const struct ViewClass *)arg1 NodeSpecs:(const struct NodeSpecs *)arg2;
@property(readonly, nonatomic) VZFTextNodeRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) struct TextNodeSpecs textSpecs; // @synthesize textSpecs=_textSpecs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct NodeLayout)nodeDidLayout;

@end

