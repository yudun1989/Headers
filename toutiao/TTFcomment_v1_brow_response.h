//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface TTFcomment_v1_brow_response : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *commentDataArray; // @dynamic commentDataArray;
@property(readonly, nonatomic) unsigned long long commentDataArray_Count; // @dynamic commentDataArray_Count;
@property(nonatomic) int errNo; // @dynamic errNo;
@property(copy, nonatomic) NSString *errTips; // @dynamic errTips;

@end

