//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface ApNodeInfoExtraObj : NSObject
{
    NSString *_subcmd;
    NSArray *_delegates;
    NSDictionary *_extraData;
}

@property(retain, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSArray *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSString *subcmd; // @synthesize subcmd=_subcmd;
- (void)dealloc;

@end

