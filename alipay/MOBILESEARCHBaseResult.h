//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILESEARCHToString.h"

@class NSArray, NSString;

@interface MOBILESEARCHBaseResult : MOBILESEARCHToString
{
    int _resultCode;
    NSString *_resultMsg;
    NSArray *_traceLogs;
}

+ (Class)traceLogsElementClass;
@property(retain, nonatomic) NSArray *traceLogs; // @synthesize traceLogs=_traceLogs;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;

@end

