//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APSecRiskResult : NSObject
{
    int _status;
    int _result;
    NSString *_sealedData;
    NSString *_rdsResult;
}

@property(retain, nonatomic) NSString *rdsResult; // @synthesize rdsResult=_rdsResult;
@property(retain, nonatomic) NSString *sealedData; // @synthesize sealedData=_sealedData;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

