//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface ATAttrArgItem : TBJSONModel
{
    _Bool _recursive;
    _Bool _flatten;
    NSString *_commitKey;
    NSString *_attrName;
}

@property(nonatomic) _Bool flatten; // @synthesize flatten=_flatten;
@property(nonatomic) _Bool recursive; // @synthesize recursive=_recursive;
@property(retain, nonatomic) NSString *attrName; // @synthesize attrName=_attrName;
@property(retain, nonatomic) NSString *commitKey; // @synthesize commitKey=_commitKey;
- (void).cxx_destruct;

@end

