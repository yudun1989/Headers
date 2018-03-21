//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TBECTPaper : NSObject
{
    _Bool _useCache;
    _Bool _hasAvailableUpdate;
    _Bool _getback;
    NSString *_md5;
    NSString *_modelUrl;
    NSString *_group;
    NSString *_version;
    NSString *_mainVersion;
    NSDictionary *_pdata;
    unsigned long long _type;
    NSString *_arch;
}

+ (_Bool)huigun:(id)arg1 type:(unsigned long long)arg2;
+ (id)papersFromJsonArray:(id)arg1 type:(unsigned long long)arg2;
+ (id)paperFromResJson:(id)arg1 type:(unsigned long long)arg2;
@property(copy, nonatomic) NSString *arch; // @synthesize arch=_arch;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool getback; // @synthesize getback=_getback;
@property(retain, nonatomic) NSDictionary *pdata; // @synthesize pdata=_pdata;
@property(nonatomic) _Bool hasAvailableUpdate; // @synthesize hasAvailableUpdate=_hasAvailableUpdate;
@property(copy, nonatomic) NSString *mainVersion; // @synthesize mainVersion=_mainVersion;
@property(nonatomic) _Bool useCache; // @synthesize useCache=_useCache;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *modelUrl; // @synthesize modelUrl=_modelUrl;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void).cxx_destruct;
- (id)initWithJsonDict:(id)arg1;

@end

