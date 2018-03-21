//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBAMPMessage.h"

@class NSString;

@interface TBAMPBusinessCardMessage : TBAMPMessage
{
    NSString *_bcUserId;
    NSString *_bcHeadUrl;
    NSString *_bcNick;
}

@property(retain, nonatomic) NSString *bcNick; // @synthesize bcNick=_bcNick;
@property(retain, nonatomic) NSString *bcHeadUrl; // @synthesize bcHeadUrl=_bcHeadUrl;
@property(retain, nonatomic) NSString *bcUserId; // @synthesize bcUserId=_bcUserId;
- (void).cxx_destruct;
- (void)parseFromDict:(id)arg1;
- (void)loadFromCoreDataMessage:(id)arg1;
- (void)copyToCoreDataMessage:(id)arg1;
- (void)loadDataWithMessage:(id)arg1;
- (id)toDictionary;
- (id)ampDeepCopy;
- (id)initWithMessage:(id)arg1;
- (id)initWithJson:(id)arg1;

@end

