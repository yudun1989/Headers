//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMediaBaseInfo.h"

@class NSString;

@interface TBErrorBaseInfo : TBMediaBaseInfo
{
    _Bool isSuccess;
    NSString *_errorCode;
    NSString *_errorMsg;
}

@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
- (void).cxx_destruct;
- (id)toBaseErrDictionary;

@end

