//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPBaseReqVO.h"

@class NSString;

@interface PPCheckPeerPayerReq : PPBaseReqVO
{
    NSString *_peerpayID;
    NSString *_applyerID;
}

@property(retain, nonatomic) NSString *applyerID; // @synthesize applyerID=_applyerID;
@property(retain, nonatomic) NSString *peerpayID; // @synthesize peerpayID=_peerpayID;
- (void).cxx_destruct;

@end

