//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TXDRHelper : NSObject
{
    NSString *_token;
    int _commadnId;
    int _moduleId;
}

- (void).cxx_destruct;
- (void)ReportEvent;
- (void)SetEventIntValue:(id)arg1 withValue:(long long)arg2;
- (void)SetEventValue:(id)arg1 withValue:(id)arg2;
- (void)SetCommonValue:(id)arg1 withValue:(id)arg2;
- (id)init:(id)arg1 withCommandId:(int)arg2 withModuleId:(int)arg3 withExtInfo:(id)arg4;
- (id)init:(int)arg1 withModuleId:(int)arg2 withExtInfo:(id)arg3;

@end

