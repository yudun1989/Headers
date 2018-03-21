//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GI_ValueCache;

@interface GIXSecurityUtils : NSObject
{
    int _keyNumber;
    GI_ValueCache *_httpCache;
    GI_ValueCache *_socketCache;
}

+ (id)AESOperation:(unsigned int)arg1 data:(id)arg2 key:(id)arg3 iv:(id)arg4;
+ (id)m:(id)arg1 t:(id)arg2;
+ (id)l:(id)arg1 t:(id)arg2;
+ (id)k;
+ (id)j;
+ (id)altAESIv:(id)arg1;
+ (id)altAESKey;
+ (id)i:(id)arg1;
+ (id)h:(id)arg1;
+ (id)g:(id)arg1 d:(id)arg2 i:(id)arg3;
+ (id)f:(id)arg1 d:(id)arg2 i:(id)arg3;
+ (id)e;
+ (id)d:(id)arg1;
+ (id)c:(id)arg1 d:(id)arg2 i:(id)arg3;
+ (id)b:(id)arg1 d:(id)arg2 i:(id)arg3;
+ (id)a;
+ (id)instance;
@property int keyNumber; // @synthesize keyNumber=_keyNumber;
@property(retain, nonatomic) GI_ValueCache *socketCache; // @synthesize socketCache=_socketCache;
@property(retain, nonatomic) GI_ValueCache *httpCache; // @synthesize httpCache=_httpCache;
- (void).cxx_destruct;
- (id)generateAESKey:(id)arg1 salt:(id)arg2;
- (id)random;
- (id)cacheKey;
- (id)init;

@end

