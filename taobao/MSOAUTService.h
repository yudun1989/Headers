//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MSOAUTService : NSObject
{
}

+ (id)generateFailureArgsForIntent:(id)arg1 error:(id)arg2;
+ (void)commitInvokeMethodFailureUTWithIntent:(id)arg1 methodId:(id)arg2 cost:(double)arg3;
+ (void)commitInvokeMethodSuccessUTWithIntent:(id)arg1 methodId:(id)arg2 cost:(double)arg3;
+ (void)commitRequestServiceFailureUTWithIntent:(id)arg1 error:(id)arg2;
+ (void)commitRequestServiceSuccessUTWithIntent:(id)arg1;
+ (void)commitObtainServiceFailureUTWithIntent:(id)arg1 error:(id)arg2;
+ (void)commitObtainServiceUTWithIntent:(id)arg1;
+ (void)commitRequestServiceUTWithIntent:(id)arg1;

@end

