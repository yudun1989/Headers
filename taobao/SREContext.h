//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SREContext : NSObject
{
    NSMutableDictionary *_factDic;
    NSMutableDictionary *_blockDic;
}

@property(retain, nonatomic) NSMutableDictionary *blockDic; // @synthesize blockDic=_blockDic;
@property(retain, nonatomic) NSMutableDictionary *factDic; // @synthesize factDic=_factDic;
- (void).cxx_destruct;
- (CDUnknownBlockType)methodForName:(id)arg1;
- (id)factForName:(id)arg1;
- (void)insertMethod:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)insertFact:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

