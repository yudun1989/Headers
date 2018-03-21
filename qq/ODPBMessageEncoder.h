//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ODPBMessageEncoder : NSObject
{
    struct CPBMessageEncoder *encoder;
    _Bool isSubnode;
}

+ (id)encoder;
- (id)ToNSData;
- (id)AddSubMessage:(unsigned int)arg1;
- (void)AddStr:(unsigned int)arg1 value:(id)arg2;
- (void)AddBuf:(unsigned int)arg1 value:(id)arg2;
- (void)AddDouble:(unsigned int)arg1 value:(double)arg2;
- (void)AddFloat:(unsigned int)arg1 value:(float)arg2;
- (void)AddUInt64:(unsigned int)arg1 value:(unsigned long long)arg2;
- (void)AddInt64:(unsigned int)arg1 value:(long long)arg2;
- (void)AddUInt32:(unsigned int)arg1 value:(unsigned int)arg2;
- (void)AddInt32:(unsigned int)arg1 value:(int)arg2;
- (void)AddBool:(unsigned int)arg1 value:(_Bool)arg2;
- (void)dealloc;
- (id)initWithEncoder:(struct CPBMessageEncoder *)arg1;
- (id)init;

@end

