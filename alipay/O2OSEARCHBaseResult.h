//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OSEARCHToString.h"

@class NSArray, NSString, O2OSEARCHABTestResult;

@interface O2OSEARCHBaseResult : O2OSEARCHToString
{
    int _resultCode;
    NSString *_resultMsg;
    NSArray *_traceLogs;
    O2OSEARCHABTestResult *_abResult;
}

+ (Class)traceLogsElementClass;
@property(retain, nonatomic) O2OSEARCHABTestResult *abResult; // @synthesize abResult=_abResult;
@property(retain, nonatomic) NSArray *traceLogs; // @synthesize traceLogs=_traceLogs;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;

@end
