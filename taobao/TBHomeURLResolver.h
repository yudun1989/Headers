//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBURLActionHandler-Protocol.h"

@class NSString, TBHomeViewController, UIViewController;

@interface TBHomeURLResolver : NSObject <TBURLActionHandler>
{
    TBHomeViewController *_homeVC;
    UIViewController *_htaoHomeVC;
}

@property(retain, nonatomic) UIViewController *htaoHomeVC; // @synthesize htaoHomeVC=_htaoHomeVC;
@property(retain, nonatomic) TBHomeViewController *homeVC; // @synthesize homeVC=_homeVC;
- (void).cxx_destruct;
- (_Bool)isHomePageHost:(id)arg1;
- (_Bool)isHomePageUrl:(id)arg1;
- (_Bool)isActionExcutorUrl:(id)arg1;
- (_Bool)isHomeTabbarUrl:(id)arg1;
- (id)handleURLActionRequest:(id)arg1;
- (_Bool)isHTaoHome;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

