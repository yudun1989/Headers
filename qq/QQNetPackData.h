//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface QQNetPackData : NSObject
{
    NSString *_key;
    NSDictionary *_extendData;
    int _xo;
    CDUnknownBlockType _callback;
}

+ (id)initWithBlock:(CDUnknownBlockType)arg1 andKey:(id)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (id)initWithBlock:(CDUnknownBlockType)arg1 andKey:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSDictionary *extendData; // @dynamic extendData;
@property(readonly, nonatomic) NSString *key; // @dynamic key;

@end

