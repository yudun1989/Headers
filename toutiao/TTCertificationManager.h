//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTCertificationManager : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)cancelCertificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)postModofyCertificationWithRequestModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postCertificationWithRequestModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCertificationInfoWithCompletion:(CDUnknownBlockType)arg1;

@end

