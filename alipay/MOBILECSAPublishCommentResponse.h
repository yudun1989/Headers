//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcResponse.h"

@class NSString;

@interface MOBILECSAPublishCommentResponse : MOBILECSABaseRpcResponse
{
    NSString *_commentId;
    NSString *_tipText;
    NSString *_orderBizType;
}

@property(retain, nonatomic) NSString *orderBizType; // @synthesize orderBizType=_orderBizType;
@property(retain, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end

