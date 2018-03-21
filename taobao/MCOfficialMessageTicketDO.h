//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCOfficialMessageBaseDO.h"

#import "MCOfficialMessageTicketDOProtocol-Protocol.h"

@class NSString;

@interface MCOfficialMessageTicketDO : MCOfficialMessageBaseDO <MCOfficialMessageTicketDOProtocol>
{
}

- (id)openUrl;
- (id)aircraftFlights;
- (id)arrivalAirport;
- (id)arrivalTime;
- (id)departAirport;
- (id)departTime;
- (id)time;
- (id)passenger;
- (id)title;
- (id)initWithDictionary:(id)arg1;
- (id)summary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isRetry;
@property(nonatomic) unsigned long long sendStatus;
@property(readonly) Class superclass;

@end

