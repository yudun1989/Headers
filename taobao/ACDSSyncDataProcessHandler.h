//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ACDSSyncDataProcessHandler : NSObject
{
}

+ (void)dataFormatBeforeAddProcess:(id)arg1;
+ (_Bool)needDispatchToListener:(int)arg1;
+ (_Bool)isSuccessCode:(int)arg1;
+ (void)updateStatus:(id)arg1 withStatus:(int)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)processAfterModCommand:(id)arg1 withCode:(int)arg2 withResult:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)processAfterDelCommand:(id)arg1 withCode:(int)arg2 withResult:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)processAfterAddCommand:(id)arg1 withCode:(int)arg2 withResult:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)processModify:(id)arg1 withSchema:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)processDelete:(id)arg1 withSchema:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)processAdd:(id)arg1 withSchema:(id)arg2 withCallback:(CDUnknownBlockType)arg3;

@end

