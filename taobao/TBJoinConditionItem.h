//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "TBJoinConditionItem-Protocol.h"

@class NSString;

@interface TBJoinConditionItem : TBJSONModel <TBJoinConditionItem>
{
    long long _canJoin;
    NSString *_message;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long canJoin; // @synthesize canJoin=_canJoin;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

