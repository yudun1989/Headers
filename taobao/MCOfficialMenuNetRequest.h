//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface MCOfficialMenuNetRequest : AMPNetPacket
{
    NSString *_officialAccountID;
}

@property(retain, nonatomic) NSString *officialAccountID; // @synthesize officialAccountID=_officialAccountID;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithAccountID:(id)arg1;

@end

