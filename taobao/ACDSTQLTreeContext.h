//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ACDSTQLTreeContext : NSObject
{
    _Bool _isSync;
    NSString *_name;
    NSString *_dsname;
    NSArray *_primaryKeyFromSchema;
}

@property(nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
@property(retain, nonatomic) NSArray *primaryKeyFromSchema; // @synthesize primaryKeyFromSchema=_primaryKeyFromSchema;
@property(retain, nonatomic) NSString *dsname; // @synthesize dsname=_dsname;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

