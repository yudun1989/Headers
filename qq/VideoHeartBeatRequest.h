//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/GSBaseRequest.h>

#import <QQMainProject/GSRequestProtocol-Protocol.h>

@class NSString;

@interface VideoHeartBeatRequest : GSBaseRequest <GSRequestProtocol>
{
    unsigned int _nearbyAvStatus;
    NSString *_roomID;
}

@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(nonatomic) unsigned int nearbyAvStatus; // @synthesize nearbyAvStatus=_nearbyAvStatus;
- (void)dealloc;
- (id)translateHeaderCode:(unsigned int)arg1;
- (id)parseResponseBodyString:(void *)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceType;
- (unsigned int)serviceNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

