//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACDSTQuery.h"

@class NSMutableDictionary, NSObject, NSString;

@interface ACDSTQueryObject : ACDSTQuery
{
    NSString *_primaryKey;
    NSObject *_primaryValue;
    NSMutableDictionary *_keyMap;
}

@property(retain, nonatomic) NSMutableDictionary *keyMap; // @synthesize keyMap=_keyMap;
@property(retain, nonatomic) NSObject *primaryValue; // @synthesize primaryValue=_primaryValue;
@property(retain, nonatomic) NSString *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)filter:(id)arg1;
- (id)joinSubQuery:(id)arg1;
- (id)join:(id)arg1 byQueryParam:(id)arg2;
- (id)join:(id)arg1 byCondition:(id)arg2;
- (id)put:(id)arg1 withAlias:(id)arg2;
- (id)putAll;
- (id)put:(id)arg1;
- (id)as:(id)arg1;
- (id)init:(id)arg1 primaryKey:(id)arg2 primaryValue:(id)arg3;
- (id)init:(id)arg1;
- (id)init;

@end

