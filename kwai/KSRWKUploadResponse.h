//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

@class NSNumber, NSString;

@interface KSRWKUploadResponse : KSUBaseResponse
{
    NSString *_pcId;
    NSNumber *_cmRenwokanUpdate;
    NSNumber *_checkStatusAfter;
}

@property(retain, nonatomic) NSNumber *checkStatusAfter; // @synthesize checkStatusAfter=_checkStatusAfter;
@property(retain, nonatomic) NSNumber *cmRenwokanUpdate; // @synthesize cmRenwokanUpdate=_cmRenwokanUpdate;
@property(copy, nonatomic) NSString *pcId; // @synthesize pcId=_pcId;
- (void).cxx_destruct;

@end

