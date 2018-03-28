//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTJDLinkService-Protocol.h"

@class JDAdsOpenManager, NSString;

@interface TTJDLinkManager : NSObject <TTJDLinkService>
{
    JDAdsOpenManager *_jdManager;
}

+ (id)sharedManager;
@property(retain, nonatomic) JDAdsOpenManager *jdManager; // @synthesize jdManager=_jdManager;
- (void).cxx_destruct;
- (_Bool)isAppInstalled;
- (long long)openJDAdsByURL:(id)arg1 withViewController:(id)arg2;
- (long long)openJDAdsByURLString:(id)arg1 withViewContorller:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

