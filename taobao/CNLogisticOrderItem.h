//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CNLogisticTransitListItemProtocol-Protocol.h"

@class NSString;

@interface CNLogisticOrderItem : NSObject <CNLogisticTransitListItemProtocol>
{
    NSString *_message;
    NSString *_time;
}

@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

