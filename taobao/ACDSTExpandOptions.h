//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACDSTQLTreeNode.h"

@class NSMutableArray;

@interface ACDSTExpandOptions : ACDSTQLTreeNode
{
    NSMutableArray *_options;
}

@property(retain) NSMutableArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)toJson:(id)arg1;
- (id)toString;
- (void)appendOption:(id)arg1;

@end

