//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCPageInfoProtocol-Protocol.h"

@class NSString;

@interface MCOfficialPageInfo : NSObject <MCPageInfoProtocol>
{
    NSString *_identifier;
    NSString *_pageSpm;
    NSString *_pageSpmA;
    NSString *_pageSpmB;
    NSString *_pageName;
}

@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *pageSpmB; // @synthesize pageSpmB=_pageSpmB;
@property(copy, nonatomic) NSString *pageSpmA; // @synthesize pageSpmA=_pageSpmA;
@property(copy, nonatomic) NSString *pageSpm; // @synthesize pageSpm=_pageSpm;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

