//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCOfficialMessageVOProtocol-Protocol.h"

@class NSString;
@protocol MCOfficialMessageDOProtocol;

@interface MCOfficialMessageVO : NSObject <MCOfficialMessageVOProtocol>
{
    id <MCOfficialMessageDOProtocol> _officialMessageDO;
    unsigned long long _direction;
    double _height;
    NSString *_actionURL;
}

@property(retain, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) id <MCOfficialMessageDOProtocol> officialMessageDO; // @synthesize officialMessageDO=_officialMessageDO;
- (void).cxx_destruct;
- (unsigned long long)sendStatus;
- (id)avatarImageUrl;
- (id)timeStringFormat;
- (id)initWithDO:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
