//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTRStaticPlugin : NSObject
{
    NSMutableDictionary *_nativeInvocations;
}

@property(retain, nonatomic) NSMutableDictionary *nativeInvocations; // @synthesize nativeInvocations=_nativeInvocations;
- (void).cxx_destruct;
- (_Bool)callHandlerWithCommand:(id)arg1 engine:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerHandlerBlock:(CDUnknownBlockType)arg1 forMethodName:(id)arg2;
- (id)init;

@end

